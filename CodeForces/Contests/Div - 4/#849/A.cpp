

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
typedef long long ll;
using namespace std;
void solve();
    set<char> setCheckr = {'c','o','d','e','f','r','s'};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string checker = "codefrs";
    set<char> setCheckr = {'c','o','d','e','f','r','s'};


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
    char n;
    cin >> n;

    if(setCheckr.find(n) != setCheckr.end())
        cout << "Yes";
    else
        cout << "No";

    return;


}
