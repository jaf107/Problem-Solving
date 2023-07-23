#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int h)
{
	int temp;
	while (1)
	{
		temp = a%h;
		if (temp == 0)
		return h;
		a = h;
		h = temp;
	}
}

void rsa(double msg[],int n)
{

}

int main()
{
	double p = 17;
	double q = 19;

    double n = p*q;
    double phi = (p-1)*(q-1);
    double e = 7;

	while (e < phi)
	{
		if (gcd(e, phi)==1)
			break;
		else
			e++;
	}

    double d1=1/e;
    double d=fmod(d1,phi);

    double msg = 12;

    double message[5] = {2,6,4,9,10};
    double encM[5];
    double decM[5];

    rsa(message,5);


    for(int i=0;i<5;i++)
    {
        double c = pow(message[i], e);
        double m = pow(c, d);

        c = fmod(c,n);
        m = fmod(m,n);
        encM[i] = c;
        decM[i] = m;
    }

    cout<<"Message is    ";
    for(int i=0;i<5;i++)
    {
        cout<<message[i]<< " ";
    }
    cout<<endl;

    cout<<"Encryption is ";
    for(int i=0;i<5;i++)
    {
        cout<<encM[i]<< " ";
    }
    cout<<endl;

    cout<<"Decryption is ";
    for(int i=0;i<5;i++)
    {
        cout<<decM[i]<< " ";
    }
    cout<<endl;



	return 0;
}

