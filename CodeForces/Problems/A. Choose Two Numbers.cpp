#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxN=0,m,maxM=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>maxN)
            maxN = a[i];

    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        if(b[i]>maxM)
            maxM = b[i];
    }
    cout<<maxN<<" "<<maxM;

    return 0;
}

