#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n],sum=0,maxA=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]>maxA)
            maxA = a[i];
    }
    if(sum%2 == 1)
        cout<<"NO";
    else
    {
        if(maxA<=(sum-maxA))
            cout<<"YES";
        else
            cout<<"NO";
    }

    return 0;
}
