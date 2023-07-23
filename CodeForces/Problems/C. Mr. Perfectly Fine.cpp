
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

    ll m = 0;
    string s;
    ll v01 = LONG_MAX, v10 = LONG_MAX, v11 = LONG_MAX;
    for(ll i = 0; i < n; i++)
    {
        cin >> m >> s;

        if(s == "01"){
            v01 = min(v01, m);
        }
        else if(s == "10"){
            v10 = min(v10, m);
        }
        else if(s == "11"){
            v11 = min(v11, m);
        }
    }

    cout <<"V01 - "<< v01 << endl;
    cout <<"V10 - " << v10 << endl;
    cout <<"V11 - " <<v11 << endl;


    ll ans = 0;
    ans = min(v01+v10, v11);

    if( abs(ans) >= INT_MAX){
        ans = -1;
    }
    cout << ans ;

}
