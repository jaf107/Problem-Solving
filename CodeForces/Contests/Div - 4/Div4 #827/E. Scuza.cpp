
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
    int n, q;
    cin >> n >> q;
    vector<ll> stairs(n);
    vector<ll> questions(q);
//    for(auto &x: stairs)
    for(int i = 0; i < n ; i++)
    {
        ll x;
        cin >> x;
        stairs[i] = x;
    }
    cout << "I'm HEre";

    for(int i = 0; i < q ; i++)
    {
        ll x;
        cin >> x;
        stairs[i] = x;
    }
    ll maxlen = 0, ques;
    for(int i = 0; i < q; i++)
    {
        ques = questions[i];
        maxlen = 0;
        for(int si = 0; si < n; i++)
        {
            if(stairs[si] <= ques)
            {
                maxlen += stairs[si];
            }
        }
        questions[i] = maxlen;
    }

    for(auto x: questions)
    {
        cout << x << " ";
    }






}



