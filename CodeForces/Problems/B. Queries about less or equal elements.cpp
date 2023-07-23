
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);

    for(int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < m;i++)
    {
        cin >> b[i];

    }
    for(int i = 0; i < m;i++)
    {
        cout << upper_bound(a.begin(), a.end(), b[i]) - a.begin() << " ";
    }
}
