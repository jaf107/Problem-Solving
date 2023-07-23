#include<bits/stdc++.h>
using namespace std;

#define edge pair<int, int>
vector<pair<int, edge>>graph;
vector<pair<int, edge>>tree;
int n,m,parent[50],total;

int findset(int u)
{
    if(parent[u]==u) return u;

    return findset(parent[u]);
}

void makeset(int u)
{
    parent[u]=u;
}

void union_(int u ,int v)
{
    parent[u]=v;
}

void MST()
{
    int u,v,cost;
    sort(graph.begin(),graph.end());
    for(int i=0;i<m;i++)
    {
        u= graph[i].second.first;
        v=graph[i].second.second;
        if(findset(u)!=findset(v))
        {
            tree.push_back(graph[i]);
            union_(findset(u),findset(v));
            total+=graph[i].first;
        }
    }
}

int main()
{
    freopen("Kruskal_input.txt","r",stdin);
    int x,y,w;
    cout<<"total number of nodes and edges "<<endl;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y>>w;
        graph.push_back(make_pair(w,make_pair(x,y)));
        makeset(x);
        makeset(y);
    }
    MST();

    cout<<"Min cost is : "<<total<<endl;

    cout<<"From To Cost : "<<endl;
    for(int i=0;i<tree.size();i++)
    {
        cout<<tree[i].second.first<<" "<<tree[i].second.second<<" "<<tree[i].first<<endl;
    }
}

