
#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long int l=0,r=0;
        int ans=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            l += a[i];
            r += a[n-1-i];
            if(l<=0||r<=0)
                ans=1;
        }
        printf(ans?"NO\n":"YES\n");
    }
}
