#include<bits/stdc++.h>
using namespace std;

struct Edge
{
    int u;
    int v;
    int w;
};

struct Graph
{
    int nodes;
    int edges;

    Edge* E = new Edge[nodes];
};

Graph* createGraph(int V,int E)
{
    Graph* graph = new Graph();
    graph->edges = E;
    graph->nodes = V;

    graph->E = new Edge[V];
    return graph;
}

void printMat(Graph g)
{

}
int main()
{

}
