

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


    /// Input the array a[1...n]
    vector<ll> a(n+1),b(n+1), c(n+1);
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i] >> b[i] >> c[i];
    }

    ll sum = 0;
    bool aflag = false, aprev = false, bflag = true, bprev = false,cflag = true, cprev = false;

    for(int i = 1; i <= n; i++)
    {
        aflag = false, bflag = true, cflag = true;
        ll temp = a[i];
        if(b > a)
        {
            aflag = true;
            bflag = false;
        }

        if(c > b)
        {
            bflag = true;
            cflag = false;
        }
        cout << aflag << bflag << cflag <<endl;
    }



    for(int i = 1; i <= n; ++i)
    {
//        cout << a[i] << b[i] << c[i];
    }








}
