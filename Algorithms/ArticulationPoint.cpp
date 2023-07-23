#include<bits/stdc++.h>
#include<list>
#define NIL -1
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    void APUtil(int v,bool visited[],int disc[],int low[],int parent[],bool ap[]);

public:
    Graph(int V); // Constructor
    void addEdge(int u, int v);
    void AP() ;   // Prints Articulation points
    void initialize(int e);
};


Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int u,int v)
{
    adj[v].push_back(u);
    adj[u].push_back(v);
}


void Graph::APUtil(int u,bool visited[],int disc[],int low[],int parent[], bool ap[])
{
    static int time = 0;

    int children  = 0;

    visited[u] = true;

    disc[u] = low[u] =  ++time;


    list<int>::iterator i;

    for(i = adj[u].begin(); i!=adj[u].end(); ++i)
    {
        int v = *i; //  v is current adjacent of u

        if(!visited[v])
        {
            children++;
            parent[v] = u;
            APUtil(v,visited,disc,low,parent,ap);


            low[u] = min(low[u],low[v]);

            if(parent[u] == NIL && children > 1)
                ap[u] = true;

            if(parent[u] != NIL && low[v] >= disc[u])
                ap[u] = true;
        }
        else if(v!=parent[u])
            low[u] = min(low[u],disc[v]);
    }
}

void Graph::AP()
{
    bool *visited = new bool[V];
    int *disc = new int[V];
    int *low = new int[V];
    int *parent = new int[V];
    bool *ap = new bool[V];

    for(int i=1; i<=V;i++)
    {
        parent[i] = NIL;
        visited[i] = false;
        ap[i] = false;
    }

    for(int i=1; i<V;i++)
        if(visited[i] == false)
            APUtil(i,visited,disc,low,parent,ap);

    for(int i = 0;i<V ; i++)
    {
        if(ap[i] == true)
            cout<< i << " ";
    }
}

void Graph::initialize(int e)
{
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;

        addEdge(u,v);
    }

}


int main()
{

    int n,e;
    cin>>n>>e;
    Graph g(n);
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v);
    }
//    g.initialize(e);
    g.AP();

}
