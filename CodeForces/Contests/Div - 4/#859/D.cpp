

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
//    $ {2:/*is Single Test case?*/}
     cin>>t;
    while(t--)
    {
        solve();
//        cout<<"\n";
    }

    return 0;
}
void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for(ll i = 1; i <= n; i++)
    {
        a[i] += a[i-1];
    }

    ll l, r, k, extra, rem;
    for(ll i = 0; i < q; i++)
    {
        cin >> l >> r >> k;
        extra = (r-l + 1) * k;

        rem = a[n] - a[r] + a[l-1];
        if((rem + extra )%2)
        {
            cout << "Yes";
        }else
        {
            cout << "No";
        }
        cout <<"\n";
    }


}
