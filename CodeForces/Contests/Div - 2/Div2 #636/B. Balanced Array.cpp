#include<bits/stdc++.h>
using namespace std;
void oddPrinter(int n,int sum)
{
    int tSum = 0;
    for(int i=1; i<2*n-1; i+=2)
    {
        cout<<i<<" ";
        tSum +=i;
    }
    cout<<sum-tSum<<endl;

}
void evenPrinter(int n)
{
    int sum = 0;
    for(int k=2; k< 2*n+1 ; k+=2)
    {
        sum+=k;
        cout<<k<<" ";
    }
    //cout<<endl<<sum;
    oddPrinter(n,sum);
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;

        if(n%4 != 0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            evenPrinter(n/2);
        }
    }
    return 0;
}

