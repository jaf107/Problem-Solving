#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>a>>b;

        if(a>b)
        {
            int ta =a;
            int tb = b;
            while(ta>5)
            {
                ans++;
                ta-=5;
            }
            while(ta>2)
            {
                ans++;
                ta-=2;
            }
            while(ta>0)
            {
                ans++;
                ta-=1;
            }
        }
        else if(a<b)
        {
            int ta =a;
            int tb = b;
            while(tb>5)
            {
                ans++;
                tb-=5;
            }
            while(tb>2)
            {
                ans++;
                tb-=2;
            }
            while(tb>0)
            {
                ans++;
                tb-=1;
            }
        }
        else
        {
            cout<<0<<endl;
            continue;
        }
        cout<<ans<<endl;

    }

    return 0;
}
