
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
    if(n == 3)
    {
        cout << "NO";
        return;
    }
    cout << "YES\n";
    if(n%2 == 0)
    {
        for(int i = 0; i < n; i+=2)
        {
            cout << "1 -1 ";
        }
    }
    else{
        ll second = n/2;
        ll first = second -1;

        second = second*(-1);

        for(int i = 0; i < n-1; i+=2)
        {
            cout << first << " " << second << " ";
        }
        cout << first;

    }


}

