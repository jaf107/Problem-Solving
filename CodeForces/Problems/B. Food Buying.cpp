#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,ans,r;
        cin>>n;
        r = n%10;
        ans = n - r;
        while(1)
        {
            n/=10;
            r+=n;
            n = r;
            r = n%10;
            ans+= (n - r);
            if(n<10 && r<10)
            {
                ans+=r;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
