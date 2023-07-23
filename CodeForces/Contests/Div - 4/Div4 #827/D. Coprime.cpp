
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
typedef long long ll;
using namespace std;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("error.txt", "w", stderr);
//    freopen("output.txt", "w", stdout);
//#endif

    ll t=1;
//    $ {2:/*is Single Test case?*/}
     cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }

//    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n+1);
    for(int i = 1; i <= n ; i++){
        ll x;
        cin >> x;
        a[i] = x;
    }

    ll maxAns = -1;

    for(ll i = 1; i <= n; i++)
    {
        for(ll j = 1; j <= n; j++)
        {
            if(__gcd(a[i],a[j]) == 1)
            {
//                cout << i << " " << j <<  endl;
                maxAns = max(maxAns, i + j);
            }
        }
    }

    cout << maxAns;





}


