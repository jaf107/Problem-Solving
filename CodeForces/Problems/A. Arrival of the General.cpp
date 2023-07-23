#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int soldiers[n];
    for(int i=0;i<n;i++)
        cin>>soldiers[i];
    int mn=0,mx=n-1;
    int mnV = soldiers[0];
    int mxV = soldiers[n-1];

    for(int i=0;i<n;i++)
    {
        if(mnV == soldiers[i])
        {
            mn = i;
        }
        else if(mnV > soldiers[i])
        {
            mnV = soldiers[i];
            mn = i;
        }

    }

    for(int i=n-1;i>=0;i--)
    {
        if(mxV == soldiers[i])
        {
            mx = i;
        }
        else if(mxV < soldiers[i])
        {
            mxV = soldiers[i];
            mx = i;
        }
    }
    mn++;
    mx++;

    if(mn<mx)
        mx--;
    cout<<n-mn+mx-1<<endl;

    //cout<<"Max :"<<mxV<<" is in "<<mx<<endl;
    //cout<<"Min :"<<mnV<<" is in "<<mn<<endl;


}
