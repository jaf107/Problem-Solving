

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

    const ll N = 1e5 + 5;
    const ll mod = 1e9 + 7;
    vector<ll> fact(N);
    fact[0] = 1;
    for(int i = 1; i < N; i++)
    {
        fact[i] = fact[i-1]*i;
        fact[i] %= mod;
    }

    ll t=1; /// If there is no multiquery
    cin>>t; /// then comment this


    while(t--)
    {
        ll n;
        cin >> n;
        ll ans = n * (n-1);
        ans %= mod;

        ans = (ans * fact[n])%mod;
        cout << ans;

        cout<<"\n";

    }

    return 0;
}

void printMap(map<ll,ll> m, string name)
{
    cout << name << " : \n";
    for(auto x: m)
    {
        cout << " " << x.first << " " <<  x.second << endl;
    }
    cout << endl;

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
    /// Input the number of element
    ll n;
    cin >> n;






}
