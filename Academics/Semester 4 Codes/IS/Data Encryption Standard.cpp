#include<bits/stdc++.h>
//#define push_back pb
using namespace std;
// Array to hold 16 keys
string round_keys[16];
// String to hold the plain text
//string pt;


string shiftLeftOnce(string s)
{
    string ans = "";
    for(int i = 1; i< 28; i++)
    {
        ans += s[i];
    }
    ans += s[0];

    return ans;
}

string shiftLeftTwice(string s)
{
    string ans = "";
    for(int i = 0; i< 2; i++)
    {
        for(int j = 1; j < 28 ; j++)
        {
            ans += s[j];
        }
        ans += s[0];
        s = ans;
        ans = "";
    }
    return s;
}

void generateKeys(string key)
{
    int PC1[56] = {
	57,49,41,33,25,17,9,
	1,58,50,42,34,26,18,
	10,2,59,51,43,35,27,
	19,11,3,60,52,44,36,
	63,55,47,39,31,23,15,
	7,62,54,46,38,30,22,
	14,6,61,53,45,37,29,
	21,13,5,28,20,12,4
	};

	int PC2[48] = {
	14,17,11,24,1,5,
	3,28,15,6,21,10,
	23,19,12,4,26,8,
	16,7,27,20,13,2,
	41,52,31,37,47,55,
	30,40,51,45,33,48,
	44,49,39,56,34,53,
	46,42,50,36,29,32
	};

	string permuted_key = "";
    for(int i=0;i<56;i++)
    {
        permuted_key += key[PC1[i] - 1];  // Places all the bits permutedly


    string left= permuted_key.substr(0, 28);
	string right= permuted_key.substr(28, 28);


    // Key Generation for 16 rounds
    for(int i=0 ; i < 16 ; i++)
    {
        if(i == 0 || i == 1 || i == 8 || i == 15){
            left = shiftLeftOnce(left);
            right = shiftLeftOnce(right);
        }
        else
        {
            left = shiftLeftTwice(left);
            right = shiftLeftTwice(right);
        }
    }

    string combinedKeys = left + right;
    string roundKey = "";

    for(int i = 0 ; i < 48 ; i++)
    {
        roundKey += combinedKeys[PC2[i] - 1 ];
    }
    round_keys[i] = roundKey;
    cout<<"Key "<< i+1 << ": " <<round_keys[i]<<endl;

    }


}

int main()
{
    // A 64 bit key
	string key = "10101010101110110000100100011000001001110011"
	"01101100110011011101";// A block of plain text of 64 bits
//	pt= "1010101111001101111001101010101111001101000100110010010100110110";
//
//	string tpt = pt;
    generateKeys(key);
	// Generate Keys

}
