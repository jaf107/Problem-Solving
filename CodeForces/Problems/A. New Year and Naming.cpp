
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string a[n];
    string b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int t;
        cin>>t;
        int mr = t%m;
        int nr = t%n;

        if(mr==0)
            mr = m;
        if(nr==0)
            nr = n;
        cout << a[nr-1] << b[mr-1] <<  endl;

    }

    return 0;
}
