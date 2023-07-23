

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

void printVector(vector<ll> a, string name){
    cout << endl << name << ": " ;
    for(auto x: a){
        cout << x;
    }
    cout << endl << endl;
}

ll calc_pair(vector<ll> a)
{


    ll zeroCount = 0, pairNo= 0;
    ll n = a.size();
    vector<ll> pairsMatched(n);

    for(ll i = n-1; i > -1; i--)
    {
        if(a[i] == 0){
            zeroCount++;
        }else{
            pairsMatched[i] = zeroCount;
            pairNo += zeroCount;
        }
    }

//    printVector(pairsMatched, "PairCounter");

    return pairNo;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for(auto &x: arr){
        cin >> x;
    }

    vector<ll> copyArr = arr;

//    printVector(arr, "Basic");
    ll basic = calc_pair(arr);
    for(ll i = 0; i < n; i++){
        if(copyArr[i] == 0){
//            cout << " 0 found \n" ;
            copyArr[i] = 1;
            break;
        }
    }
//    printVector(copyArr, "Changed 0");
    ll change0 = calc_pair(copyArr);
    copyArr = arr;


    for(ll i = n-1; i >= 0; i--){
        if(copyArr[i] == 1){
//                            cout << " 1 found \n" ;

            copyArr[i] = 0;
            break;
        }
    }
//printVector(copyArr, "Changed 1");
    ll change1 = calc_pair(copyArr);

    cout << max(basic, max(change0,change1));

}
