

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
    ll n, x;
    cin >> n >> x;

    if(n%x != 0){
        cout << "-1";
        return;
    }

    int v = n/x;

    vector<ll> primefactors;
    while(v > 1){
        for(int i = 2; i <= v; i++){
            while(v%i == 0){
                primefactors.PB(i);
                v /= i;
            }
        }
    }

    vector<bool> is(n+1, false);
    vector<ll> nextVal (n+1);
    vector<ll> vals;

    ll cur = x;

    for(auto it: primefactors)
    {
        is[cur] = true;
        nextVal[cur] = cur * it;
        cur *= it;
    }

//    assert(curr == n);
    printVector(nextVal, "Prime");

    for(int i = 1; i <= n; i++)
    {
        if(i == 1)
            cout << x << " ";
        else if(i == n)
            cout << 1 << " ";
        else if (is[i])
            cout << nextVal[i] << " ";
        else
            cout << i << " ";

    }
}
