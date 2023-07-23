#include<bits/stdc++.h>
using namespace std;

int graph[1000][1000];
bool visited[1000];

int n,m,k;

void initialize()
{
    for(int i=1; i<=n; i++)
    {
        visited[i] = false;
        for(int j=1; j<=n; j++)
        {
            graph[i][j] = 0;
        }
    }
}

void showGraph()
{
    cout<<"Graph :\n";
    for(int i = 1; i<=n ; i++)
    {
        for(int j=1; j<=n ; j++)
        {
            printf("%-4d",graph[i][j]);
        }
        cout<<endl;
    }
}
int main()
{
//    int n,m,k;
    cin>>n>>m>>k;

    for(int i=0; i<k; i++)
    {
        int u,v;
        cin>>u>>v;

        graph[u][v] = 1;
    }

    showGraph();


    return 0;
}
