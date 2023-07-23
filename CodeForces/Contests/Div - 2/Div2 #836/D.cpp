
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
typedef long long ll;
using namespace std;
void solve();
ll main()
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
    ll n;
    cin >> n;

    if(n == 2){
        cout << "3 1";
    }else if(n == 3){
        cout << "3 6 7";
    }else if(n == 4){
        cout << "21 25 23 31";
    }else if(n == 5){
        cout << "20 29 18 26 28";
    }else{
        vector<ll> a(n+1);
        for(ll i = 1; i <= n;i++){
            a[i] = 2*i - 1;
            a[i] += 3*n - 8;
        }

        a[2] ++;
        a[3]++;
        a[4]++;
        a[5]++;

        for(ll i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
    }




}

