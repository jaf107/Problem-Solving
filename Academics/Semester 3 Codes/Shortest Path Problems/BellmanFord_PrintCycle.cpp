
#include<bits/stdc++.h>

#define INF 100000
#define NIL -1
using namespace std;
int graph[100][100];
int n;
int d[100],prev[100];
void relax(int u,int v)
{
    d[v] = min(d[v], d[u]+graph[u][v]);

    if(d[v] > d[u] + graph[u][v])
    {
        d[v] = d[u] + graph[u][v];
        prev[v] = u;
    }
}
void initializeSingleSource(int source)
{
    for(int i = 1; i<= n ; i++)
    {
        d[i] = INF;
        prev[i] = NIL;
    }

    d[source] = 0;
}
void initializeGraph()
{
    for(int i = 1; i<= n; i++)
    {
        for(int j = 1; j<=n; j++)
            graph[i][j] = 0;
    }
}

bool bellmanFord(int source)
{
    initializeSingleSource(source);
    for(int i = 1; i<n-1; i++)
    {
        for(int u = 1 ; u <= n; u++)
        {
            for(int v = 1; v <= n ; v++)
            {
                if(graph[u][v]!= 0)
                    relax(u,v);
            }
        }
    }

    bool flag = false,caseAns = false;
    for(int u = 1 ; u <= n; u++)
    {
        for(int v = 1; v <= n ; v++)
        {
            if(d[v] > d[u] + graph[u][v])
            {
                d[v] = d[u]+graph[u][v];
                prev[v] = u;
                flag = true;
                caseAns = true;
//
            }

            if(flag)
            {
                cout<<"NEGATIVE CYCLE"<<endl;

                vector<int> ans;
                vector<bool> vis(n+1,false);

                int ii = u;
                while(!vis[ii])
                {
                    vis[ii] = true;
                    ii = prev[ii];
                }

                int uu = ii;
                ans.push_back(uu);
                uu = prev[uu];
                while(uu^ii)
                {
                    ans.push_back(uu);
                    uu= prev[uu];

                }
                ans.push_back(uu);
                reverse(ans.begin(),ans.end());


                for(int t = 0 ; t<ans.size();t++)
                {
                        cout<<ans[t] << " ";

                }
            }
        }
    }
    if(caseAns)
        return false;

    return true;
}
int main()
{
    int e;
    cin>>n>>e;

    initializeGraph();
    int u,v,w;
    for(int i = 0; i<e; i++)
    {
        cin>>u>>v>>w;

        graph[u][v] = w;
    }

    bellmanFord(1);


}
