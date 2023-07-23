
#include<bits/stdc++.h>
#define pb push_back


using namespace std;
typedef long long ll;


vector<bool> used;
vector<vector<ll>> g;
vector<ll> d, p;

void edge(ll a, ll b)
{
    g[a].pb(b);

//    for undirected graph add this line
//    g[b].pb(a);
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
        cout << "Path for " << u << " is : ";

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
//    p[s] = -1;

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

int main()
{
    int n, e;
    cin >> n >> e;

    used.assign(n, false);
    g.assign(n, vector<ll>());
    d.assign(n, 0);
    p.assign(n, -1);

    int a, b;
    for (int i = 0; i < e; i++) {
        cin >> a >> b;
        edge(a, b);
    }

    for (int i = 0; i < n; i++) {
        if (!used[i])
            bfs(i);
    }

    for (int i = 0; i < n; i++) {
        cout << "Distance for " << i << " is - " << d[i] << endl;
    }

    for (int i = 0; i < n; i++) {
//        printPath(i);
    }


    return 0;
}
