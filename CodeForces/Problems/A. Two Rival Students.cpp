#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans,n,x,a,b;
        cin>>n>>x>>a>>b;
        int d=abs(a-b);
        if((d+x)>=n)
            ans = n-1;
        else
            ans = d+x;
        cout<<ans<<endl;

    }
    return 0;
}
