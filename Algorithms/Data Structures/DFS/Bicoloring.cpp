#include<bits/stdc++.h>
using namespace std;

#define sz 100

vector<int>adj[sz];
int visited[sz],color[sz],flg;

void DFS(int u)
{

}

int main()
{
    int t,a,b,node,edge;
    freopen("input.txt","r",stdin);
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>node>>edge;
        memset(visited,0,sizeof(visited));
        memset(color,0,sizeof(color));

        for(int i=0;i<sz;i++)adj[i].clear();
        for(int i=0;i<edge;i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        flg=0;

        DFS(1);

        if(flg)printf("NOT BICOLORABLE.\n");
        else printf("BICOLORABLE.\n");
    }
}


