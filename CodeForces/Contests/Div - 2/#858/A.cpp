

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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if(d >= b && ((a-b) >= (c-d)))
    {

        ll ans = (d-b) + ((a+d-b) -c);
//        c += d-b;
//        ans += (c-a);

        cout << ans;
    }
    else
    {
        cout << -1;
        return;
    }

}
