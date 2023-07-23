
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
    ll x, cnt = 0,cnt0 = 0, cnt1 = 0, maxZero = 0;
    for(int i = 0; i < n; ++i)
    {
        cin >> x;
        if(x == 0)
        {
            cnt0++;
            cnt++;
        }else{
            cnt--;
            cnt1++;
        }
        if(cnt < 0)
            cnt = 0;
//        cnt = max(cnt, 0);
        maxZero = max(cnt,maxZero);
    }

    if(cnt0 == 0)
        cout << cnt1 - 1;
    else
        cout << cnt1 + maxZero;




}

