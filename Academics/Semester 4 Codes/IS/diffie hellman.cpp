#include<bits/stdc++.h>

using namespace std;

int powerMod(int mod, int base, int x) // (a^X) mod q
{
    int res = 1;
    while(x > 0)
    {
        if( x%2 == 1)
        {
            res = (res*base) % mod;
        }
        base =  base*base % mod;
        x /= 2;
    }

    return res;
}

int main()
{
    int q = 353;
    int a = 5;

    int xA = 97;
    int xB = 233;

    int yA, yB;

    yA = powerMod(q, a, xA);
    yB = powerMod(q, a, xB);

    cout << "Public key of a: " << yA << endl;
    cout << "Public key of b: " << yB << endl;

    int pkA, pkB;

    pkA = powerMod(q, yB, xA);//(yB ^ xA)  mod q
    pkB = powerMod(q, yA, xB);

    cout << "Shared key of a: " << pkA << endl;
    cout << "Shared key of b: " << pkB << endl;

    return 0;
}
