

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
    vector<ll> a(n);
    map<ll,ll> now;
    ll sum = 0,curr = 0;
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
        now[i] = a[i];
    }

    for(int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        if(t == 1)
        {
            ll index, value;
            cin >> index >> value;
            sum += value - (curr + now[index-1]);
            now[index - 1] = value - curr;

        }else
        {
            ll no;
            cin >> no;
            sum = no * n;
            curr = no;
            now.clear();
        }
        cout << sum << endl;
    }








}
