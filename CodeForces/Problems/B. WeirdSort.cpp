#include<bits/stdc++.h>
using namespace std;
void sortChecker(int a[],int n)
{
    bool ans = true;
    for(int i=0; i<n; i++)
    {
        if(a[i]>a[i+1])
        {
            //cout<<"\nDue to this "<<a[i]<<" "<<i+1<<endl;
            ans = false;
        }
    }
    if(ans)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return ;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],p[m];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<m; i++)
            cin>>p[i];
        for(int i=0; i<m; i++)
        {
            if(a[p[i]] > a[p[i+1]])
                swap(a[p[i]],a[p[i+1]]);
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        sortChecker(a,n);
    }
    return 0;
}

