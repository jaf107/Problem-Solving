
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

vector<vector<int>> adj;
int cycle_start, cycle_end;
vector<char> color;
vector<int> parent;

bool dfs(int v)
{
    color[v] = 1;
    for (int u : adj[v])
    {
        if (color[u] == 0)
        {
            parent[u] = v;
            if (dfs(u))
                return true;
        }
        else if (color[u] == 1)
        {
            cycle_end = v;
            cycle_start = u;
            return true;
        }
    }
    color[v] = 2;

    return false;
}
void showCycle()
{
    vector<int> cycle;
    cycle.push_back(cycle_start);

    for (int v = cycle_end; v != cycle_start; v = parent[v])
    {
        cycle.push_back(v);
    }

    cycle.push_back(cycle_start);
    reverse(cycle.begin(), cycle.end());

    cout << "Cycle Found: ";
    for (int v : cycle)
    {
        cout << v << " ";
    }
}
void find_cycle()
{
    int n = adj.size();

    color.assign(n, 0);
    parent.assign(n, -1);
    cycle_start = -1;
    cycle_end = -1;

    for (int i = 0; i < n; i++)
    {
        if (!color[i] == 0 && dfs(i))
        {
            break;
        }
    }

    if (cycle_start == -1)
    {
        cout << "Acyclic" << endl;
    }

    else
    {
        showCycle();
    }
}
void solve()
{
    int n, e;
    cin >> n >> e;

    adj.assign(n, vector<int>());

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    find_cycle();

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