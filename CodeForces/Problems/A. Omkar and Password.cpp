#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n];
        for(int i=0; i< n ; i++)
            cin>>a[i];

        bool all = true;

        for(int i=0; i< n-1; i++)
        {
            if(a[i] != a[i+1])
                all = false;
        }

        if(all)
            cout<<n<<endl;
        else
            cout<<1<<endl;
    }
}
