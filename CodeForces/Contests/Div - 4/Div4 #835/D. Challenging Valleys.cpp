

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
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

    int t=1;
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
    vector<ll> arr ;
    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;

        if(i == 0 || x!= arr.back()){
            arr.PB(x);
        }
    }

    ll valleyCount = 0;
    for(ll i = 0; i < arr.size(); i++){
        if((i == 0 || arr[i-1]> arr[i]) && (i == arr.size()-1 || arr[i] < arr[i+1] ) ){
            valleyCount++;
        }
    }

    if(valleyCount == 1){
        cout << "YES";
    }else{
        cout << "NO";
    }

}
