#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,maxA = 0, maxAP = 0;
        cin>>n;
        int a[n];
        for(int i=0; i< n ; i++)
        {
            cin>>a[i];
            if(a[i] > maxA)
            {
                maxA = a[i];
                maxAP = i;
            }
        }

        int minL = INT_MAX;
        for(int j = maxAP+1; j<n;j++)
        {
            minL = min(a[j],minL);
        }

        cout<<maxA-minL<<endl;
    }
}

