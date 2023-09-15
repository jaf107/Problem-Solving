
#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; a < b; i++)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

typedef long long ll;
using namespace std;
void solve();

void printArray(vector<ll> arr, string name)
{
    cout << name << ": ";
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //    $ {2:/*is Single Test case?*/}
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}

bool isBipartite(vector<vector<int>> adj)
{
    int V = adj.size();
    vector<int> side(V, 0);

    bool is_bipartite = true;
    queue<int> q;

    for (int u = 0; u < V; u++)
    {
        if (side[u] == 0)
        {
            q.push(u);
            side[u] = 1;

            while (!q.empty())
            {
                int v = q.front();
                q.pop();

                for (auto u : adj[v])
                {
                    if (side[u] == 0)
                    {
                        side[u] = side[v] * -1;
                        q.push(u);
                    }
                    else
                    {
                        if (side[u] == side[v])
                        {
                            is_bipartite = false;
                        }
                        // is_bipartite &= side[u] != side[v];
                    }
                }
            }
        }
    }

    return is_bipartite;
}

void solve()
{
    ll n, e;
    cin >> n >> e;

    vector<vector<int>> adj;
    adj.assign(n, vector<int>());

    // vector<int> adj[n];
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << (isBipartite(adj) ? "YES" : "NO");

    return;
}

/*
5 4
0 1
1 2
0 3
2 4

5 5
0 1
1 2
0 3
2 4
1 3
 */