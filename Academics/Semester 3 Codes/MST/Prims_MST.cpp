#include<bits/stdc++.h>
using namespace std;
int graph[100][100];
int n;
int cost[100], prev[100], visited[100];

void intializeGraph()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            graph[i][j] = 0;
    }
}

int extracMIN()
{
    int minH = INT_MAX;
    int u;
    for(int i=0;i<n;i++)
    {
        if(visited[i] == 0  && cost[i]<minH)
        {
            minH = cost[i];
            u = i;
        }
    }

    return u;
}
void initializeSingleSource(int u)
{
    for(int i=0;i<n;i++)
    {
        visited[i] = 0;
        cost[i] = INT_MAX;
        prev[i] = -1;

    }
    cost[u] = 0;

}
void relax(int u,int v)
{
    if(cost[v] > graph[u][v] && visited[v] == 0)
    {
        cost[v] = graph[u][v];
        prev[v] = u;

    }
}
int prims(int s)
{
    int u;
    initializeSingleSource(s);
    while(true)
    {
        u = extracMIN();
        visited[u] = 1;

        for(int v=0;v<n;v++)
        {
            if(graph [u][v] != 0)
            {
                relax(u,v);
            }

        }

        int i=0;
        for(;i<n;i++)
        {
            if(visited[i] == 0)
                break;
        }
        if(i==n)
            break;

    }


    int mst = 0;
    for(int i=0;i<n;i++)
        mst+=cost[i];


    return mst;
}

int main()
{
    int e;
    cout<<"Enter node and Edge numbers :";
    cin>> n >>e;

    intializeGraph();

    int u,v,w;
    for(int i=0;i<e;i++)
    {
        cout<<"Edge number "<<i+1<<": ";
        cin>>u>>v>>w;

        graph[u][v] = w;
        graph[v][u] = w;
    }

    cout<<"Minimum Value becomes :"<<prims(0);


    return 0;
}
