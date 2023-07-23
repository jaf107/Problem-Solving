#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main()
{
    ll x,y,a,b;
    cin >> x >> y >> a >> b;

    int g = __gcd(a,b);

    a/=g;
    b/=g;

    ll d = min(x/a, y/b);

    cout << d*a << " " << d*b;
}
