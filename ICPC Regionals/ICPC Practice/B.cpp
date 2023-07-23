

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
void solve();
double pi = 2 * acos(0.0);

int main()
{
    Faster;


//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("error.txt", "w", stderr);
//    freopen("output.txt", "w", stdout);
//#endif


    ll t=1; /// If there is no multiquery
//    cin>>t; /// then comment this


    while(t--)
    {
//        cout << pi;
        solve();
//        cout<<"\n";

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
    ll n, q;
    cin >> n >> q;


    /// Input the array a[1...n]
    vector<ll> a(n+1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < q; i++)
    {
        ll sum = 0;
        ll query;
        cin >> query;
        for(int j = 1; j <= n ; j++)
            sum += abs(a[j] - query);

        cout << sum <<endl;
    }
}
