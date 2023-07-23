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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool ans = false;
        for(int i=0;i<n;i++)
        {

            for(int j=i+2;j<n;j++)
            {
                if(a[i] == a[j])
                {
                    ans = true;
                    break;
                }
            }
            if(ans)
                break;

        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
