
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
//     cin>>t;
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
    int n, l;
    cin >> n >> l;

    vector<double> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    double maxdist = 0;
    for(int i=0; i<n-1; i++){
//        B[i] = A[i+1] - A[i];
//        if(B[i] > maxdist) maxdist = B[i];
//
        maxdist = max(maxdist,  a[i+1] - a[i]);
    }
    double maxs = (double) maxdist / 2.0;
    maxs = max(maxs, (double) max(a[0]- 0, l - a[n-1]));
    printf("%.10lf", maxs);

}
