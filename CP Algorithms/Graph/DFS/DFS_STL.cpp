#include<bits/stdc++.h>
using namespace std;

vector<vector<int > > adj;
int n;

vector<int> color;
vector<bool> visited;
vector<int> time_in, time_out;
int dfs_timer = 0;

void addEdge(vector<vector<int> > adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfsUtil(int u)
{
    visited[u] = true;
    cout << u << " ";
    for(int i = 0; i < adj[u].size(); i++)
    {
        int connectedNode = adj[u][i];
        if(visited[connectedNode] == false)
            dfsUtil(connectedNode);
    }
}

void DFS(int V )
{
    for(int u = 0; u < V; u++)
    {
        if(visited[u] == false)
            dfsUtil(u);
    }
}

int main()
{
    int V = 5;
//    vector<vector<int> > adj(V);
    adj.assign(V, vector<int>());
    visited.assign(V, false);

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    DFS(V);
    return 0;
}
