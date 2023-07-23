
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
    sort(a.begin(), a.end());

    vector<ll> cumul(n);
    cumul[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        cumul[i] = a[i] + cumul[i-1];
    }

    bool ans = true;
    for(ll i = 0; i< n-1; i++)
    {
        if(cumul[i] < a[i+1])
        {
            ans = false;
        }
    }

    if(a[0]!= 1){
        ans = false;
    }

    if(ans)
    {
        cout << "Yes";
    }else
    {
        cout << "No";
    }


}

