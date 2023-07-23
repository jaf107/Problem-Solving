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

ll n, e;


void edge(ll a,ll b)
{
    g[a].pb(b);
}
void dfsVisit(ll v)
{
    color[v] = GRAY;
    timeDfs ++;
    inTime[v] = timeDfs;

    for(ll u: g[v])
    {
        if(color[u] == WHITE)
        {
            parent[u] = v;
            dfsVisit(u);
        }
    }
    color[v] = BLACK;
    timeDfs++;
    outTime[v] = timeDfs;
}

void printGraph()
{
    for(int v = 0; v < n;v++)
    {
        cout << v << " : ";
        for(ll u:g[v]){
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

    for(int i = 0;i< e; i++)
    {
        int x, y;
        cin >> x >> y;

        edge(x, y);
    }
//    printGraph();
//    printAllStats();
}


int main()
{
    input();

    dfs();
//    printTimes();
    printAllStats();

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

