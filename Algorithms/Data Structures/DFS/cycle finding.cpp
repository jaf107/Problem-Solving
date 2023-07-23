//#include<bits/stdc++.h>
#include<iostream>
#include <vector>
#include<cstdio>
#include<cstring>

using namespace std;

int n, visited[100];
vector <int> adj[100];

bool dfs(int node, int parent)
{

}

int main(){
    freopen("inp.txt","r",stdin);
    int caseNo = 1;

    while(scanf("%d",&n)!=EOF)
    {
        int i,edges,a,b;
        memset(visited,0,sizeof (visited));
        for( i=0;i<=100;i++) adj[i].clear();

        scanf("%d",&edges);

        for(i=0;i<edges;i++)
        {
            scanf("%d %d",&a,&b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        printf("#Test Case: %d\n", caseNo++);

        for(i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                if(dfs(i, -1))
                {
                    printf("Cycle Found.\n");
                    break;
                }
                else printf("Cycle Not Found.\n");
            }
        }
    }
}
