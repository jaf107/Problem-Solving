

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
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> ans;
    ll mihai = 0, bianca = 0;
    for(ll i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            ans.PB(a[i]);
            mihai += a[i];
        }
    }
    for(ll i = 0; i < n; i++)
    {
        if(a[i] % 2 )
        {
            ans.PB(a[i]);
            bianca += a[i];
        }
    }
    if(bianca < mihai)
    {
        cout << "Yes";
    }else
    {
        cout << "No";
    }


//    for(ll i = 0; i < n; i++)
//    {
//        if(a[i] % 2 == 0)
//        {
//            ans.PB(a[i]);
//        }
//    }


}
