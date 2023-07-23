

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

    int t=1;
//    $ {2:/*is Single Test case?*/}
     cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }

    return 0;
}
void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    vector<ll> ans(n+1);
    for(ll i = 0; i < n-1; i++)
    {
        cin >> a[i];
    }
    ans[0] = a[0];

    int j = 1;
//    bool placed = true;
    if(n == 1){
        cout << a[0] << " 0";
        return;
    }
    bool placed = false;
    if(a[0] < a[01] )
    {
        a.insert(a.begin(), 0);
        placed = true;
    }
    if(!placed){
    for(int i = 1; i < n-1; i++)
    {
        if(a[i-1] > a[i] && a[i] < a[i+1]){
            a.insert(a.begin()+i+1, 0);
        }
    }
    }
//    for(int i = 1; i < n-1 ; i++)
//    {
//        if( a[i-1] < a[i] && placed){
//            ans[j++] = 0;
//            ans[j++] = a[i];
//            placed = false;
//            continue;
//        }
//        else
//            ans[j++] = a[i];
////        cout<<"U\n";
//    }

    for(auto x:a){
        cout << x << " ";
    }
//    for(int i = 0; i < ans.size()-1;i++){
//        cout << ans[i] << " ";
//    }

}
