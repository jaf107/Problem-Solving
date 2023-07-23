

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;

const ll N = 1e5 + 5;

void solve();
double pi = 2 * acos(0.0);

ll n, ans[N];
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


    while(t--)
    {
//        cout << pi;
        solve();
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

void recurse(ll r)
{
    if(r < 0)
        return;

    ll s = sqrt(2*r);
//    cout << s;
    s *= s;

    ll l = s-r;
    recurse(l-1);
    for(; l <= r; l++, r--)
    {
        ans[l] = r;
        ans[r] = l;
    }
}


void solve()
{
    /// Input the number of element
    ll n;
    cin >> n;

    recurse(n-1);

    for(ll i = 0; i < n; i++)
    {
        cout << ans[i] << ' ';
    }
//    cout << endl;

}
