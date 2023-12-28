
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
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    for(auto &x: a){
        cin >> x;
    }
    for(auto &x: b){
        cin >> x;
    }
    ll bMax = 0, sum = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        bMax = max(bMax, b[i]);
        if(i < k){
            ans = max(ans, sum + bMax * (k-i-1));
        }
    }
//    ll bMax = b[0];
//    int ans = a[0];
//    k--;


//    for(int i = 1; k != 0; k--)
//    {
//        if(a[i] < bMax  || i >= n){
//            ans += bMax;
//            continue;
//        }else if(i < n){
//            ans += a[i];
//        }
//        bMax = max(bMax, b[i]);
//        i++;
////        cout << ans << " ";
//    }
    cout << ans;
}
/**
4
4 7
4 3 1 2
1 1 1 1
3 2
1 2 5
3 1 8
5 5
3 2 4 1 4
2 3 1 4 7
6 4
1 4 5 4 5 10
1 5 1 2 5 1

*/
