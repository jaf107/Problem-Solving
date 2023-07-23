#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,lim,j,i;
    int tc;
    cin>>tc;
    while(tc--)
    {
        sum=0;

        cin>>n;
        lim = n/2;
         j=8;
        for( i=1; i<=lim; i++)
        {

                  sum=sum+j*i;
                  j=j+8;

        }
        cout<<sum<<endl;
    }
}
