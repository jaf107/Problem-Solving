
#include<bits/stdc++.h>
#define pb push_back
#define WHITE 0
#define GRAY 1
#define BLACK 2

using namespace std;
typedef long long ll;

ll timeDfs;
vector<vector<ll> > g;
vector<bool> used;
vector<ll>  parent, inTime, outTime, color;
//vector<ll> edgeType;
vector<pair<ll,ll> > treeEdge, backEge, forwardEdge, crossEdge;

ll n, e;


void edge(ll a,ll b)
{
    g[a].pb(b);
}
void dfsVisit(ll u)
{

    color[u] = GRAY;
    timeDfs ++;
    inTime[u] = timeDfs;

    for(ll v: g[u])
    {
        if(color[v] == WHITE)
        {
            treeEdge.pb({u, v});
            parent[v] = u;
            dfsVisit(v);
        }
        else if(color[v] == GRAY)
        {
            backEge.pb({u,v});
//            cout <<"Back Edge Found in between "<< u << " "<< v << endl;
        }
        else if(color[v] == BLACK && inTime[u] < inTime[v] )
        {
            forwardEdge.pb({u,v});
        }
        else if(color[v] == BLACK && inTime[u] > inTime[v])
        {
            crossEdge.pb({u,v});
        }
    }
    color[u] = BLACK;
    timeDfs++;
    outTime[u] = timeDfs;
}

void printGraph()
{
    for(int v = 0; v < n; v++)
    {
        cout << v << " : ";
        for(ll u:g[v])
        {
            cout << u <<  " ";
        }
        cout << endl;
    }
}

void printTimes()
{
    cout << "Intime\t :";
    for(int i = 0;  i < n; i++)
    {
        cout << inTime[i] << " ";
    }
    cout << endl;

    cout << "Outtime\t :";
    for(int i = 0;  i < n; i++)
    {
        cout << outTime[i] << " ";
    }
    cout << endl;
}

void printAllStats()
{

    cout << "Color\t :";
    for(int i = 0;  i < n; i++)
    {
        cout << color[i] << " ";
    }
    cout << endl;

    cout << "Parent\t :";
    for(int i = 0;  i < n; i++)
    {
        cout << parent[i] << " ";
    }
    cout << endl;


    cout << "Intime\t :";
    for(int i = 0;  i < n; i++)
    {
        cout << inTime[i] << " ";
    }
    cout << endl;

    cout << "Outtime\t :";
    for(int i = 0;  i < n; i++)
    {
        cout << outTime[i] << " ";
    }
    cout << endl;
}
void dfs()
{
//    printAllStats();
    timeDfs = 0;
    for(int i = 0; i < n; i++)
    {
        if(color[i] == WHITE)
        {
            dfsVisit(i);
        }
    }

}
void input()
{
    cin >> n >> e;

    g.assign(n, vector<ll>());
    inTime.assign(n, 0);
    outTime.assign(n, 0);
    parent.assign(n,-1);
    color.assign(n, WHITE);
    parent.assign(n, -1);
//    edgeType.assign(e, TREE);

    for(int i = 0; i< e; i++)
    {
        int x, y;
        cin >> x >> y;

        edge(x, y);
    }
//    printGraph();
//    printAllStats();
}

void printTreeEdges()
{
    cout << "Tree Edges \t:\n";
    for(auto x: treeEdge)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
}
void printBackEdges()
{
    cout << "Back Edges \t:\n";
    for(auto x: backEge)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
}
void printForwardEdges()
{
    cout << "Forward Edges \t:\n";
    for(auto x: forwardEdge)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
}
void printCrossEdges()
{
    cout << "Cross Edges \t:\n";
    for(auto x: crossEdge)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
}

void printEdges()
{
    printTreeEdges();
    printBackEdges();
    printForwardEdges();
    printCrossEdges();
}

int main()
{
    input();

    dfs();

//    printTimes();
    printAllStats();
    printEdges();
    return 0;
}

/*
6 8
0 1
0 3
1 4
3 1
4 3
2 4
2 5
5 5
*/

