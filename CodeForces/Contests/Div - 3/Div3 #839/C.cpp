

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
    ll n, k;
    cin >> k >> n;

    ll characteristic = 1;

    vector<ll> arr(k);
    arr[0] = 1;

    for(int i = 1; i < k; i++){
        if(arr[i-1] + characteristic <= n){
            arr[i] = arr[i-1] + characteristic;
            characteristic++;
        }
        else{
            arr[i] = arr[i-1] + 1;
        }
    }

//    cout << characteristic-1;

    printVector(arr, "Characteristic");

}
