
#include<bits/stdc++.h>
using namespace std;

int graph[100][100];
int parent[100];
int dist[100];
int color[100];

void bfs(int source, int nodes)
{
    for(int i = 0; i < nodes;i++){
        color[i] = 0;
        parent[i] = -1;
        dist[i] = INT_MAX;
    }

    color[source] = 1;
    dist[source] = 0;
    queue<int> q;
    q.push(source);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int v = 0; v < nodes; v++)
        {
            if(graph[u][v] != 0)
            {
                if(color[v] == 0)
                {
                    color[v] = 1;
                    dist[v] = dist[u] + 1;
                    parent[v] = u;
                    q.push(v);
                }
            }
        }
        color[u] = 2;
    }

}
void printGraph(int nodes)
{
    for(int i = 0; i < nodes; i++)
    {
        for(int j = 0; j < nodes; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

void printStats(int nodes)
{
    for(int i = 0; i < nodes; i++)
    {
        cout << dist[i] <<  " ";
    }
    cout << "\n";
    for(int i = 0; i < nodes; i++)
    {
        char par = parent[i] + 'r';
//        cout << parent[i] <<  " ";
        cout << par <<  " ";
    }

    cout << "\n";
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    for(int i = 0; i < edges; i++)
    {
        int x, y;
        cin >> x >> y;

        graph[x][y] = 1;
        graph[y][x] = 1;
    }

    int source = 1;
    bfs(source, nodes);

//    printGraph(nodes);
    printStats(nodes);
    return 0;
}

/*
8 9
0 1
0 4
1 5
5 2
5 6
2 3
2 6
3 7
6 7
 */
