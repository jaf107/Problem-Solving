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


	double c = pow(msg, e);
	double m = pow(c, d);

	c = fmod(c,n);
	m = fmod(m,n);

    printf("Message : %lf\n",msg);
	printf("Encrypted : %lf\n", c);
	printf("Decrypted : %lf\n", m);

	return 0;
}
