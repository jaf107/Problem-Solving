

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;

ll n, m;
ll grid[1005][1005];
ll vis[1005][1005];

ll maxDepth ;
ll tempDepth ;

void solve();

void resetGrid()
{
    maxDepth = 0;
    for(int i = 0; i < 1005; i++)
    {
        for(int j = 0; j < 1005; j++)
        {
            grid[i][j] = 0;
            vis[i][j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
//    $ {2:/*is Single Test case?*/}
     cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
//        resetGrid();
    }

    return 0;
}

void dfsVisit(int x, int y)
{
    if(x < 0 || x >= n || y < 0|| y >= m)
    {
        return;
    }

    if(!grid[x][y])
        return;

    if(vis[x][y])
        return;

    vis[x][y] = 1;
    tempDepth += grid[x][y];

    dfsVisit(x - 1, y);
    dfsVisit(x + 1, y);
    dfsVisit(x, y - 1);
    dfsVisit(x, y + 1);
}

void dfs()
{
//    ll c = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(vis[i][j] == 0 && grid[i][j])
            {
//                c++;
                dfsVisit(i,j);
                maxDepth = max(maxDepth, tempDepth);
                tempDepth = 0;
            }
        }
    }

//    cout << "DFS ran for " << c << " times \n";

}
void solve()
{
    maxDepth = 0;
    cin >> n >> m;

    ll temp;

    for(int i = 0;i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> temp;
            vis[i][j] = 0;
            grid[i][j] = temp;
        }
    }

    dfs();

    cout << maxDepth;

//    for(int i = 0;i < n; i++)
//    {
//        for(int j = 0; j < m; j++)
//        {
//            cout << grid[i][j];
//        }
//        cout << endl;
//    }

}
