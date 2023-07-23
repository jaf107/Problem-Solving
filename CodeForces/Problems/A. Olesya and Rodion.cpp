#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;

    cin>>n>>t;
    int a[n];
    char b[n+1];
    if(t == 10 && n!=1)
    {
        b[0] = '1';
        for(int i=1; i<n; i++)
            b[i]='0';

        b[n]='\0';
        cout<<b;
    }
    else if(t==10 && n==1)
    {
        cout<<-1;
        return 0;
    }
    else
    {
        for(int i=0; i<n; i++)
            cout<<t;


    }


    return 0;
}
