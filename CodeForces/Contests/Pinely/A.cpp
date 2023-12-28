

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
    ll n;
    cin >> n;
    vector<ll> x(n), y(n);
    ll maxX = LONG_MIN, minX = LONG_MAX;
    ll maxY = LONG_MIN, minY = LONG_MAX;
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
        maxX = max(maxX, x[i]);
        maxY = max(maxY, y[i]);
        minX = min(minX, x[i]);
        minY = min(minY, y[i]);
    }

    if((maxX > 0 && minX < 0) && (minY < 0 && maxY > 0) ){
        cout << "NO";
    }else {
        cout << "YES";

    }

}
