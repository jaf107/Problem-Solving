#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i< n ; i++)
            cin>>a[i];
        int peak = a[n-1],i,peakP = n-1;
        for( i = n-2 ; i >=  0 ; i--)
        {
            if(a[i] < peak)
                break;
            else
            {
                peak = a[i];
                peakP = i;
            }
        }
        int pre = 0;
        for(i = peakP - 1 ; i >= 0 ; i--)
        {
            if(a[i] > peak)
            {
                pre = i + 1;
                break;
            }
            else
            {
                peak = a[i];
            }
        }
        cout<<pre<<endl;

    }
}

