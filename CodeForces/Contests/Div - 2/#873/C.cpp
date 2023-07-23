

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
const int MOD = 1e9 + 7;

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

    vector<ll> a(n,0),b(n, 0);
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<>());

    printArray(a, "A");
    printArray(b, "B");

    ll result = 1;

    cout << "GEQ COUNT :\n";
    for(int i = 0; i < n; i++)
    {
        int geq_count = n - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
        result = result * max(geq_count - i, 0) % MOD;

//        cout <<i <<  " " << geq_count <<  " " << result << "\n";
    }
//    cout << result;

    vector<ll> moreNum(n, 0);

    for(int i = 0; i < n; i++)
    {
        moreNum[i] = n - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
    }


//    printArray(moreNum, "MoreNum");

//    sort(moreNum.begin(), moreNum.end());

    cout << "PREVIOUS:\n";
    ll ans = 1;
    for(int i = 0;i < n; i++)
    {
        ans = ans * max(moreNum[i] - i, 0LL )%MOD;
//        ans *= (max(moreNum[i] - i, 0LL )%MOD);
//        cout << i << " " << moreNum[i] <<  " "<<ans<< endl;
    }
//
//    cout << ans;
}

/**
5
6
9 6 8 4 5 2
4 1 5 6 3 1
3
4 3 2
3 4 9
1
2
1
3
2 3 4
1 3 3
12
2 3 7 10 23 28 29 50 69 135 420 1000
1 1 2 3 5 8 13 21 34 55 89 144


*/

/**
1
14
15 9 3 10 6 4 2 13 12 11 8 7 14 5
2 3 2 1 3 7 2 2 1 5 2 1 5 4
*/
