
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

bool isCyclic_util(vector<int> adj[], vector<bool> visit, int curr)
{
    if (visit[curr])
    {
        return true;
    }

    visit[curr] = true;

    bool FLAG = false;
    for (int i = 0; i < adj[curr].size(); i++)
    {
        FLAG = isCyclic_util(adj, visit, adj[curr][i]);
        if (FLAG)
            return true;
    }

    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    vector<bool> visit(V, false);
    bool FLAG = false;
    for (int u = 0; u < V; u++)
    {
        visit[u] = true;
        for (int v = 0; v < adj[u].size(); v++)
        {
            FLAG = isCyclic_util(adj, visit, adj[u][v]);
            if (FLAG)
                return true;
        }
        visit[u] = false;
    }

    return false;
}

void solve()
{
    // Graph Nodes & no of Edges
    ll n, e;
    cin >> n >> e;

    // Graph Adjacency list
    vector<int> adj[n];

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    cout << isCyclic(n, adj);

    return;
}

/*

5 6
0 1
0 2
3 1
3 4
4 2
2 3
*/

/*
5 5
1 2
2 4
4 5
5 3
3 2
*/
