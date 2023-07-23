#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    scanf("%d",&cases);
    while(cases--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        int dif = INT_MAX,d;
        for(int i=0;i<n-1;i++)
        {
            d  =  abs(a[i+1] - a[i]);
            if(d< dif)
                dif = d;
        }
        cout<<dif<<endl;
    }
    return 0;
}

