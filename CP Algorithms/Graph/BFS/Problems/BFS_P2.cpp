

#include<bits/stdc++.h>
#define pb push_back


using namespace std;
typedef long long ll;


vector<bool> used;
vector<vector<ll>> g;
vector<ll> d, p;
vector<string> stringIntMapping;

int findIndex(string s)
{
    for(int i = 0; i < stringIntMapping.size(); i++)
    {
        if(stringIntMapping[i] == s)
        {
            return i;
        }
    }
    return -1;
}

int setIndex(string s)
{
    int index = stringIntMapping.size();
    stringIntMapping.push_back(s);

    return index;
}

void edge(ll a, ll b)
{
    g[a].pb(b);

}

void bfs()
{
    queue<ll> q;
    ll s = findIndex("c");
    q.push(s);
    used[s] = true;
    d[s] = 2;
    p[s] = -1;

    while( !q.empty() )
    {
        ll v = q.front();
        q.pop();

//        cout << v << " ";

        for(ll u : g[v])
        {
            if( !used[u] )
            {
                used[u] = true;
                d[u] = d[v] + 2;
                p[u] = v;

                q.push(u);
            }
        }
    }


}

void input()
{

    int n;
    cin >> n;
    used.assign(n, false);
    g.assign(n, vector<ll>());
    d.assign(n, 0);
    p.assign(n, -1);
    for(int i =0; i < n-1; i++)
    {
        string x, y;
        cin >> x >> y;

        ll xIndex = findIndex(x);
        ll yIndex = findIndex(y);

        if(xIndex == -1)
        {
            xIndex = setIndex(x);
        }
        if(yIndex == -1)
        {
            yIndex = setIndex(y);
        }

        edge(xIndex, yIndex);

    }
}

void printPath(int k)
{
    if(k == -1)
    {
        return;
    }

    printPath(p[k]);

    if(stringIntMapping[k] == "c")
    {
        cout << "c:";
    }
    else
    {
        cout << "\\" << stringIntMapping[k];
    }

}

void query()
{
    int q;
    cin >> q;

    for(int i = 0; i < q; i++)
    {
        string x;
        cin >> x;

        int index = findIndex(x);

        if(index == -1)
        {
            cout<<"File Not Found"<<endl<<"-1";
        }
        else
        {
            cout<<"Absolute path for "<<x<<": ";
            printPath(index);
            cout<<endl<<"Number of mouse clicks required for opening "<<x<<": "<<d[index];
        }
        cout << endl << endl;
    }

}

int main()
{
    input();
    bfs();
    query();

    return 0;
}
