#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i=0,j=0,k=0;
        int n;
        cin>>n;
        int a[n];
        for(int i= 0 ; i<n ; i++)
            cin>>a[i];

        bool case1 = false;

        for( i = 1; i<n-1 ; i++)
        {
            if(a[i] > a[i-1] && a[i] > a[i+1])
            {
                case1 = true;
                break;
            }
        }
        if(case1)
        {
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<" "<<i+2<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

