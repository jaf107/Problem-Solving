#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int a[n];
        int d = 0;

        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0; i<k;i++)
        {
            d = *max_element(a,a+n);
            for(int j = 0; j< n;j++)
            {
                a[j] = d - a[j];

            }
        }

        for(int i=0; i<n;i++)
            cout<<a[i] << " ";
        cout<<endl;



    }
}

