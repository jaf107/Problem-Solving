#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int levels[n+1] = {0};

    int p,q,t;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>t;
        levels[t]++;
    }

    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>t;
        levels[t]++;
    }

    bool pass = true;
    for(int i=1;i<=n;i++)
    {
        if(levels[i] == 0)
            pass = false;
    }
    if(pass)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";

    return 0;
}
