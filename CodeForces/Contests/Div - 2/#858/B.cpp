
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

    ll sum0 = 0;
    bool plu = false;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 0){
            sum0++;
        }else if(a[i]>1){
            plu = true;
        }
    }

    if(sum0 <= (n+1)/2){
        cout << "0";
    }else if(sum0 == n || plu){
        cout << "1";
    }else{
        cout << "2";
    }

}

