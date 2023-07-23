
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
void solve();
double pi = 2 * acos(0.0);

int main()
{
    Faster;


//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("error.txt", "w", stderr);
//    freopen("output.txt", "w", stdout);
//#endif


    ll t; /// If there is no multiquery
    cin>>t; /// then comment this


    while(t--)
    {
//        cout << pi;
        solve();
        cout<<"\n";

    }

    return 0;
}





void solve()
{
    /// Input the number of element
    ll n;
    cin >> n;
    int a[100000];
    int sum=0;
    bool pos=true;

    /// Input the array a[1...n]
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i]==-1)
            pos=false;
        sum=sum+a[i];
    }

    bool neg=false;
    for(int i = 1; i <= n; ++i){
        if(a[i]==-1 && a[i+1]==-1)
        {
            neg =true;
        }

    }
    if (pos)
    {
        sum=sum-4;
    }
    if(neg)
    {
        sum=sum+4;
    }


    cout<<sum;






}
