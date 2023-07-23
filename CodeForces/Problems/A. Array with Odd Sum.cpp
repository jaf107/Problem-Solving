#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,p=0,q=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2 == 1)
                p=1;
            else
                q=1;
        }
        if(sum%2 == 1)
            cout<<"YES"<<endl;
        else if(sum%2==0 && p==1 && q==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
    return 0;
}

