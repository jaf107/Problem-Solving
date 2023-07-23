#include<bits/stdc++.h>
using namespace std;
vector<int> bridges;

int id ;
int graph[25][25];
int ids[25],low[25];
bool visited[25];
int n;

void dfs(int node,int parent)
{
    visited[node] = true;
    id++;
    low[node] = id;
    ids[node] = id;

    for(int i=node,j=0; j<n; j++)
    {
        if(graph[i][j]!=0)
        {
            if( j == parent )
                continue;
            if(!visited[j])
            {
                dfs(j,i);
                low[i] = min(low[i],low[j]);
            }
            if(ids[i] < low[j])
            {
                bridges.push_back(i);
                bridges.push_back(j);
            }
        }
        else
        {
            low[node] = min(low[node],ids[j]);
        }
    }
}
void findBridges()
{
    for(int i=0; i<n; i++)
    {
        if(!visited[i])
            dfs(i,-1);
    }
}

void initialize()
{
    int e;
    cin>>n>>e;

    id = 0;

    for(int i=0; i<e; i++)
    {
        int u,v,w;
        cin>>u>>v;

        graph[u][v] = 1;

//        graph[u][v] = w;
    }

    for(int i=0; i<n; i++)
    {
        ids[i] = 0;

        visited[i] = false;
    }
}


int main()
{
    initialize();

    findBridges();

    for(int i=0; bridges.size(); i++)
        cout<<ids[i]<<" ";

    for(int i=0; bridges.size(); i++)
        cout<<low[i]<<" ";

}

