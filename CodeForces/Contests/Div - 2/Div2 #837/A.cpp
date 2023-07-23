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
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll minCount = 1, maxCount = 1, minNum = INT_MAX, maxNum = 0;
    for(auto &x: arr){
        cin >> x;

        if(x >= maxNum){
            if(x == maxNum)
                maxCount++;
            else
                maxCount = 1;
            maxNum = x;
        }

        if(x <= minNum){
            if(x == minNum)
                minCount++;
            else
                minCount = 1;
            minNum = x;
        }
    }
//
//    cout << "Max Number: " <<maxNum ;
//    cout << " -> Max Count : " <<maxCount << endl;
//    cout << "MIN Number: " <<minNum;
//    cout << " -> Min Count : " <<minCount << endl;


    cout << maxCount * minCount * 2;

}

