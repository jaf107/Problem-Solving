

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
void solve(ll index);
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
    cin>>t; /// then comment this


for(ll i = 1; i <= t; i++ )    {
        solve(i);
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

void solve(ll index)
{
    /// Input the number of element
    ll n, k;
    cin >> n >> k;


    /// Input the array a[1...n]
    vector<ll> a(n+1, 0);
    ll sum = 0;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(), a.end());

    ll ans = sum + (k-1)*a[n-1];

    cout << "Case "









}