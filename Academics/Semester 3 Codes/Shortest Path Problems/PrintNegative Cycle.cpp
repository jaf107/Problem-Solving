#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int n,m;
    cin>> n>>m;
    vector<vector<pair<int,ll int > > >graph(n+1);
    for(int i=0; i<m; i++)
    {
        ll int a,b,c;
        cin>> a>> b>> c;
        graph[a].push_back({b,c});
    }

    vector<ll int >dist(n+1,1e14),par(n+1,-1);

    // applying bellman ford algo.

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            vector<vector<pair<int,ll int > > >::iterator ite;
            for(ite = graph.begin(); ite != graph.end(); ite++)
            {
                ll int node=ite.first;
                ll int c=ite.second;
                if(dist[node]>c+dist[j])
                {
                    dist[node]=c+dist[j];
                    par[node]=j;
                }
            }
        }
    }


    // checking nth iteration


    bool flag=false;
    for(int i=1; i<=n; i++)
    {
        vector<vector<pair<int,ll int > > >::iterator k;
        for(k= graph.begin(); k!=graph.end(); k++)
        {
            ll int node=k.first,c=k.second;
            if(dist[node]>c+dist[i])
            {
                dist[node]=c+dist[i];
                par[node]=i;
                flag=true;
            }

            if(flag)
            {

                // negative cycle founded

                cout<<"YES cycle founded"<<endl;

                vector<int >ans;
                vector<bool>vis(n+1,false);


                //  loop for finding the start of cycle
                while(!vis[i])
                {
                    vis[i]=true;
                    i=par[i];
                }


                // pushing the nodes of path in vector(ans).

                int u=i;
                ans.push_back(u);
                u=par[u];
                while(u^i)
                {
                    ans.push_back(u);
                    u=par[u];
                }
                ans.push_back(u);
                reverse(ans.begin(),ans.end());


                //printing path

                for(auto z:ans)
                    cout<<z<<" ";
                return 0;
            }
        }
    }

    if(!flag)
        cout<<"NO cycle founded"<<endl;
}
