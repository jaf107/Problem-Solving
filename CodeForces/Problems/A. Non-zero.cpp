#include<bits/stdc++.h>
using namespace std;
int sumOA(int arr[],int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int proOA(int arr[],int n)
{
    int pro = 1;
    for(int i=0; i<n; i++)
    {
        pro = pro * arr[i];
    }
    return pro;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n],sum=0,pro=1,zero =0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i] == 0)
            {
                a[i] = 1;
                zero++;
            }

        }

        int ans = zero;
        for(int i=0; i<zero; i++)
        {
            a[i] = 1;
        }
        while(true)
        {
            if(sumOA(a,n)!=0)
                break;
            else
            {
                ans++;
                a[0]++;
            }

        }
        while(true)
        {
            if(proOA(a,n)!=0)
                break;
            else
            {
                ans++;
                a[0]++;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
