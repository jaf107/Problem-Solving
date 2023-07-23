

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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(auto &x: arr){
        cin >> x;
    }
    sort(arr.begin(), arr.end());
    ll gcdValue = __gcd(arr[0], arr[1]);
    for(int i = 2; i < n; i++)
    {
        gcdValue = __gcd(gcdValue, arr[i]);
    }

    cout << arr[n-1]/gcdValue;



}
