#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n],ans=0,pos=0,neg=0,zero =0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>1)
        {
            ans+=(a[i]-1);

        }
        else if(a[i]<-1)
        {
            ans+=(abs(-1-a[i]));
            //neg++;
        }
        else if(a[i] == 0)
            zero++;
        else
        {

        }
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;
        else{}
    }
    if((neg%2 !=0) && zero==0)
    {
        ans+=2;
    }


    ans+=zero;
    cout<<ans;


    return 0;
}
