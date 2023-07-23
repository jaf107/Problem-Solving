#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        char a[n];
        int num = n*(n+1);
        num/=2;
        int c=0,i;
        for( i=0; i<=n; i++)
        {
            if(c>=k)
                break;
            else
                c+=i;
        }
        int l1 = i;

            //l1 = n-i+1;
        c=num;
        for(i = n; i>=0; i--)
        {
            if(c<=k)
                break;
            else
                c-=i;
        }
        int l2 = i;

        //cout<<l1<<" "<<l2;
        for(int i=1; i<=n; i++)
        {
            if(i==l1)
                cout<<"b";
            else if(i==l2)
                cout<<"b";
            else
                cout<<"a";
        }
        cout<<endl;

    }
}
