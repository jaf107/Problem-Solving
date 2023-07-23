

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
    vector<ll> a(n);
    for(auto &x: a){
        cin >> x;
    }

    sort(a.begin()+1, a.end());
//    printVector(a,"Initial");
    ll val = 0;
    for(int i = 1; i < n;i++)
    {
        if(a[i]>a[0])
        {
            ll val = (a[i]-a[0]);
            if(val %2 )
            {
                val /= 2;
                val++;
            }else
                val/=2;

            a[0] += val;
            a[i] -= val;
        }
    }
//    printVector(a,"Final ");
    cout << a[0];

}
