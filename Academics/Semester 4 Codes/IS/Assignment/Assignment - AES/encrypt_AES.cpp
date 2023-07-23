#include<bits/stdc++.h>
#include "header.h"

using namespace std;



void SubBytes(unsigned char *state)
{
    for(int i=0; i<16;i++)
    {
        state[i] = s[state[i]];
    }
}

void ShiftRows(unsigned char *state)
{
    unsigned char temporary[16];

    //Column 1
    temporary[0] = state[0];
    temporary[1] = state[5];
    temporary[2] = state[10];
    temporary[3] = state[15];

    //Column 2
    temporary[4] = state[4];
    temporary[5] = state[9];
    temporary[6] = state[14];
    temporary[7] = state[3];

    //Column 3
    temporary[8] = state[8];
    temporary[9] = state[13];
    temporary[10] = state[2];
    temporary[11] = state[7];

    //Column 4
    temporary[12] = state[12];
    temporary[13] = state[1];
    temporary[14] = state[6];
    temporary[15] = state[11];

    for(int i=0;i<16;i++)
        state[i] = temporary[i];

}

void MixColumns(unsigned char * state)
{
    unsigned char temporary[16];

    temporary[0] = (unsigned char) mul2[state[0]] ^ mul3[state[1]] ^ state[2] ^ state[3];
	temporary[1] = (unsigned char) state[0] ^ mul2[state[1]] ^ mul3[state[2]] ^ state[3];
	temporary[2] = (unsigned char) state[0] ^ state[1] ^ mul2[state[2]] ^ mul3[state[3]];
	temporary[3] = (unsigned char) mul3[state[0]] ^ state[1] ^ state[2] ^ mul2[state[3]];

	temporary[4] = (unsigned char)mul2[state[4]] ^ mul3[state[5]] ^ state[6] ^ state[7];
	temporary[5] = (unsigned char)state[4] ^ mul2[state[5]] ^ mul3[state[6]] ^ state[7];
	temporary[6] = (unsigned char)state[4] ^ state[5] ^ mul2[state[6]] ^ mul3[state[7]];
	temporary[7] = (unsigned char)mul3[state[4]] ^ state[5] ^ state[6] ^ mul2[state[7]];

	temporary[8] = (unsigned char)mul2[state[8]] ^ mul3[state[9]] ^ state[10] ^ state[11];
	temporary[9] = (unsigned char)state[8] ^ mul2[state[9]] ^ mul3[state[10]] ^ state[11];
	temporary[10] = (unsigned char)state[8] ^ state[9] ^ mul2[state[10]] ^ mul3[state[11]];
	temporary[11] = (unsigned char)mul3[state[8]] ^ state[9] ^ state[10] ^ mul2[state[11]];

	temporary[12] = (unsigned char)mul2[state[12]] ^ mul3[state[13]] ^ state[14] ^ state[15];
	temporary[13] = (unsigned char)state[12] ^ mul2[state[13]] ^ mul3[state[14]] ^ state[15];
	temporary[14] = (unsigned char)state[12] ^ state[13] ^ mul2[state[14]] ^ mul3[state[15]];
	temporary[15] = (unsigned char)mul3[state[12]] ^ state[13] ^ state[14] ^ mul2[state[15]];

	for (int i = 0; i < 16; i++) {
		state[i] = temporary[i];
	}
}

void AddRoundKey(unsigned char * state, unsigned char * roundKey)
{
    for(int i=0; i< 16;i++)
    {
        state[i] ^= roundKey[i];
    }


}

void Round(unsigned char * state, unsigned char * key)
{
    SubBytes(state);
    ShiftRows(state);
    MixColumns(state);
    AddRoundKey(state,key);
}

void FinalRound(unsigned char *state, unsigned char *key)
{
    SubBytes(state);
    ShiftRows(state);
    AddRoundKey(state,key);
}


void AESEncrypt(unsigned char *message, unsigned char * expandedKey, unsigned char *encryptedMessage)
{
    unsigned char state[16];

    for(int i=0; i< 16; i++)
    {
        state[i] = message[i];
    }

    int numberOfRounds = 9;

    AddRoundKey(state, expandedKey); // initial round

    for(int i= 0; i < numberOfRounds ; i++)
    {
        Round(state, expandedKey +(16 * (i+1)));
    }

    FinalRound(state,expandedKey + 160);

    for(int i=0; i<16;i++)
    {
        encryptedMessage[i] = state[i];
    }
}

int main()
{
    char str[] = "54 68 61 74 73 20 6D 79 20 4B 75 6E 67 20 46 75";
    char plaintext[] = "Two One Nine Two";

    int originalLen = strlen(plaintext);
    int paddedMessageLen = originalLen;

	if ((paddedMessageLen % 16) != 0) {
		paddedMessageLen = (paddedMessageLen / 16 + 1) * 16;
	}

	unsigned char * paddedMessage = new unsigned char[paddedMessageLen];
	for (int i = 0; i < paddedMessageLen; i++) {
		if (i >= originalLen) {
			paddedMessage[i] = 0;
		}
		else {
			paddedMessage[i] = plaintext[i];
		}
	}

	unsigned char * encryptedMessage = new unsigned char[paddedMessageLen];

    istringstream hex_chars_stream(str);
	unsigned char key[16];
	int i = 0;
	unsigned int c;
//	cout<<str<<endl;
//	cout<<"Key:";
	while (hex_chars_stream >> hex >> c)
	{
		key[i] = c;
		i++;
//		cout<<hex<<(int) key[i]<<" ";
	}
//	cout<<endl;

    unsigned char expandedKey [ 176];
    KeyExpansion(key,expandedKey);

    for(int i=0;i<paddedMessageLen;i+=16)
    {
        AESEncrypt(paddedMessage+i, expandedKey,encryptedMessage + i);
    }

    cout<<"Encrypted Message: ";
    for (int i = 0; i < paddedMessageLen; i++)
    {
		cout << hex << (int) encryptedMessage[i];
		cout << " ";
	}
    delete[] paddedMessage;
	delete[] encryptedMessage;

    return 0;
}
