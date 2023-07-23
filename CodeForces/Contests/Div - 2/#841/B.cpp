
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
typedef long long ll;
using namespace std;
const int n1=1e9+7;

void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
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
    ll ans=(( ( (n*(n+1)) % n1) * (4*n-1)) % n1 * 337)%n1;
    cout<<ans;
}
