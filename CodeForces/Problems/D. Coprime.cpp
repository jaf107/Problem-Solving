

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
typedef long long ll;
using namespace std;

vector<ll> pairs[1001];
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    for(int i = 1; i < 1001; i++)
    {
        for(int j = 1; j < 1001; j++)
        {
            if(__gcd(i,j) == 1)
                pairs[i].PB(j);
        }
    }

    ll t=1;
     cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }

//    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}

void printVector(vector<ll> a, string name)
{
    cout << name << " : ";
    for(auto x: a)
    {
        cout << x << " ";
    }
    cout << endl;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a[1001];
    for(auto i = 1; i <= n; i++){
        ll x;
        cin >> x;
        a[x].PB(i);
    }

    ll ans = -1;

    for(int i = 1; i < 1001; i++)
    {
        for(ll j:pairs[i])
        {
            if( !a[i].empty() && !a[j].empty() )
            {
//            cout << i << " " << j << endl;
//                cout << " Here \n";
                ans = max(ans, a[i].back() + a[j].back());
            }
        }
    }
    cout << ans;
//     << endl;
}
