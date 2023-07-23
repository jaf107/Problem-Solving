#include<bits/stdc++.h>
using namespace std;

#define SIZE 100
int graph[SIZE][SIZE];

int bfs(int rGraph[SIZE][SIZE],int s,int t,int parent[],int ver)
{
    bool visited[ver];
    memset(visited, false, sizeof visited);

    queue<int> q;
    q.push(s);
    parent[s] = -1;
    int flow = INT_MAX;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v = 0 ; v<ver;v++)
        {

            if(visited[v] == false && rGraph[u][v]>0)
            {
                int f = rGraph[u][v];

                parent[v] = u;
                visited[v] = true;

                flow = min(flow,f);
                if(v == t)
                    return flow;
                q.push(v);

            }
        }
    }
    return 0;
}
int fordFulkerson(int source,int destination,int vertices)
{
    int maxFlow = 0;
    int rGraph[SIZE][SIZE];

    for(int i = 0 ; i<=vertices;i++)
    {
        for(int j=0;j<=vertices;j++)
        {
            rGraph[i][j] = graph[i][j];
        }
    }

    int parent[vertices];
    int newFlow;
    while(newFlow = bfs(rGraph,source,destination,parent,vertices))
    {
        maxFlow += newFlow;
        int cur = destination;
        while(cur!= source)
        {
            int prev = parent[cur];
            rGraph[prev][cur] -= newFlow;
            rGraph[cur][prev] += newFlow;
            cur = prev;
        }
    }

    return maxFlow;
}
int main()
{
    int v,e;
    cin>>v>>e;

    memset(graph, 0 , sizeof graph);
    for(int i=0; i<e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;

        graph[u][v] = w;
    }
    int s,t;
    cout<<"Enter source and destination: ";
    cin>>s>>t;
    cout<<"Maximum Flow is "<<fordFulkerson(s,t,v);

}
