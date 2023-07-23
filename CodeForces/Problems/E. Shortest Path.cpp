

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

    solve();

    return 0;
}

vector<vector<ll>> g;
vector<bool> used;
vector<ll> d;
vector<ll> p;

vector<vector<ll>> forbidden;

void edge(ll a, ll b )
{
    g[a].PB(b);
    g[b].PB(a);
}
void printPath(ll u)
{
    if( !used[u])
    {
        cout << "No Path!";
    }
    else
    {
        vector<ll> path;
        for(ll v = u; v != -1; v = p[v])
            path.push_back(v);

        reverse(path.begin(), path.end());
//        cout << "Path for " << u << " is : ";

        for(ll v: path)
            cout << v << " ";
    }
    cout << endl;
}

void bfs(ll s)
{
    queue<ll> q;

    q.push(s);
    used[s] = true;
    p[s] = -1;

    while( !q.empty() )
    {
        ll v = q.front();
        q.pop();

//        cout << v << " ";

        for(ll u : g[v])
        {
            if( !used[u] )
            {
                used[u] = true;
                d[u] = d[v] + 1;
                p[u] = v;

                q.push(u);
            }
        }
    }


}

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    used.assign(n+1, false);
    g.assign(n+1, vector<ll>() );
    d.assign(n+1, 0);
    forbidden.assign(k+1, vector<ll>());
    p.assign(n+1, -1);

    for(ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;

        edge(x, y);
//        cout <<" Ekhane\n" ;
    }

    for(ll i = 1; i <= k; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        vector<ll> t {a,b,c};

        forbidden[i] = t;
    }

    bfs(1);

    if(!used[n])
    {
        cout << -1;
        return;
    }

    printPath(n);


//    for(ll j = 1; j < g.size(); j++)
//    {
//        vector<ll> x = g[j];
//        cout << "Node " << j  << ":";
//        for(ll i = 0; i < x.size(); i++)
////        for(auto y: g[x])
//        {
//            cout << x[i] << " ";
//        }
//        cout << endl;
//    }
//
//    for(auto x: forbidden)
//    {
//        for(ll i = 0; i < x.size(); i++)
////        for(auto y: forbidden[x])
//        {
//            cout << x[i] << " ";
//        }
//        cout << endl;
//    }

}
