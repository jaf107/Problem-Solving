

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


    ll t=1; /// If there is no multiquery
//    cin>>t; /// then comment this


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
    /// Input the number of element
    ll n;
    cin >> n;


    /// Input the array a[1...n]
    vector<ll> a(n+1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }

    /// Input the number of element
    ll m;
    cin >> m;


    /// Input the array a[1...n]
    vector<ll> b(m+1);
    for(int i = 1; i <= m; ++i){
        cin >> b[i];
    }

    sort(a.begin(), a.end() );
    sort(b.begin(), b.end() );

    ll ans = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(abs(a[i] - b[j]) <= 1)
            {
               ans++;
               b[j] = 1000;
               break;
            }
        }
    }

    cout << ans;



}
