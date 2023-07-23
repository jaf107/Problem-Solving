#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];

        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(b[i]<b[j])
                    swap(b[i],b[j]);
            }
        }

        int ans = 0;
        for(int i=0; i<k; i++)
        {
            a[i] = max(a[i],b[i]);
        }
        for(int i=0; i<n; i++)
            ans += a[i];

        cout<<ans<<endl;
    }
    /*for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
        */
}
