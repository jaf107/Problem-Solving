

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
//        cout<<"\n";

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
    string s;
    cin >> s;

    ll n = s.size();
    vector<ll> ans(n);

    ans[0] = 0;

    for(int i = 1; i < n; i++)
    {
        if(s[i] == s[i-1])
            ans[i] = ans[i-1] + 1;
        else
            ans[i] = ans[i-1];
    }

//    printVector(ans, "Ans ");

    ll q;
    cin >> q;
    for(int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << ans[r-1] - ans[l-1] << endl;
    }
}
