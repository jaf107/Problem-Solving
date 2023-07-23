#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;

vector<int> arr[1000001];
int visited[1000001];

void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while(t--)
    {
        solve();
        cout<<"\n";
    }

//    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}

void dfs(int node)
{
    visited[node] = 1;
    for(int child: arr[node])
    {
        if(!visited[child])
        {
            dfs(child);
        }
//        printGraph();
    }
}

void printGraph(int n)
{
    for(int i = 0; i <= n ; i++)
    {
        cout << i << " -> ";
        for(int child: arr[i]){
            cout << child << " , ";
        }
        cout << endl;
    }
}

void solve()
{
    int n, e, a, b;
    cin >> n >> e;

    for(int i = 1; i <= e; i++)
    {
        cin >> a >> b;

        arr[a].PB(b);
        arr[b].PB(a);
    }

    int cc = 0;
    for(int i = 1; i <= n; i++ )
    {
        if(!visited[i])
        {
            dfs(i);
            cc++;
        }
    }

//    printGraph(n);


    cout << cc << endl;

}



