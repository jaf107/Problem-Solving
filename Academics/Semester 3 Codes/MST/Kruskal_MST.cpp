#include<bits/stdc++.h>
using namespace std;
struct Graph
{
    int V; //No of Vertices
    int E; //No of Edges

    int matrix[100][100];

};
Graph inputGraph(Graph g)
{
    int source,destination,weight;
    for(int i=0;i<g.E;i++)
    {
        cout<<"Enter source, destination and Weight :";
        cin>>source>>destination>>weight;


        g.matrix[source][destination] = weight;
        g.matrix[destination][source] = weight;

    }
    return g;
}
void showGraph(Graph g)
{
    for(int i=1;i<=g.V;i++)
    {
        for(int j=1;j<=g.V;j++)
        {
            cout<<g.matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    Graph g;
    int node,edges;
    cout<<"Enter the number of nodes and edges :";
    cin>>node>>edges;

    g.V = node;
    g.E = edges;

    showGraph(g);
    g = inputGraph(g);

    showGraph(g);

}
