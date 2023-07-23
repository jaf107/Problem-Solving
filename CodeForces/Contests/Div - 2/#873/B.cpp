

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

typedef long long ll;
using namespace std;
void solve();

void printArray(vector<ll> arr, string name)
{
    cout << name << ": ";
    for(auto x: arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

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
        cout<<"\n";
    }

    return 0;
}
void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n+1), dist(n+1,0);
    for(ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    set<ll> distSet;

    for(int i = 1; i <= n; i++)
    {
        dist[i] = abs(i - a[i]);
        if(dist[i])
            distSet.insert(dist[i]);
    }

    ll gcdV = *distSet.begin();
    for(auto x: distSet)
    {
        gcdV = __gcd(gcdV, x);
//        cout << x << " ";
    }

    cout << gcdV;


}
