#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    if(m * a <= b)
        cout << n * a;
    else
        cout << (n/m) * b + min((n%m) * a, b);

    return 0;

}
