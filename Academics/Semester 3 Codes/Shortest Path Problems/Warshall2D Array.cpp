#include<bits/stdc++.h>
using namespace std;
#define INFINITE 100000
#define sG 100
void printMatrix(int mat[][sG],int n)
{
    for(int i = 0 ; i< n ; i++)
    {
        for(int j = 0 ; j < n ;j++)
        {
            if(mat[i][j] != INT_MAX)
                printf("%4d",mat[i][j]);
            else
                printf("%4s","INF");
        }
        cout<<endl;
    }
}
void warshallFord(int graph[][sG],int n)
{
    int dis[sG][sG];

    for(int i = 0 ; i<n;i++)
    {
        for(int j= 0; j<n; j++)
        {
            dis[i][j] = graph[i][j];
        }
    }

    for(int k = 0; k < n ; k++)
    {
        for(int i = 0 ; i< n ; i++)
        {
            for(int j= 0 ; j < n; j++)
            {
                dis[i][j] = min(dis[i][j],dis[i][k]+dis[k][j]);
            }
        }
    }

    printMatrix(dis,n);
}
int main()
{

    int graph[sG][sG];
    int n,e;
    cin>>n>>e;

    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n;j++)
        {
            if(i==j)
            {
                graph[i][j] = 0;
                continue;
            }
            graph[i][j] = INFINITE;
        }
    }

    for(int i=0 ; i< e; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;

        graph[u][v] = w;

    }
    warshallFord(graph,n);



}

