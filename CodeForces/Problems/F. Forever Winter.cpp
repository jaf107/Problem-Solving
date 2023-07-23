

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
    ll n, m;
    cin >> n >> m;

    vector<ll> nodes(n+1,0);

    int x, y;

    for(int i = 0; i < m; i++)
    {
        cin >> x >> y;

        nodes[x]++;
        nodes[y]++;
    }

    map<ll, ll> myMap;
    for(int i = 1; i <= n; i++)
    {
        myMap[nodes[i]]++;
    }

    vector<ll> v;
    for(auto x: myMap)
    {
        v.PB(x.second);
    }

    sort(v.begin(), v.end());

    if(v.size() == 3)
    {
        cout << v[1] <<" " <<  v[2]/v[1];
    }
    else
    {
        cout << v[0] - 1<< " " << v[1] / (v[0]-1);
    }
}

