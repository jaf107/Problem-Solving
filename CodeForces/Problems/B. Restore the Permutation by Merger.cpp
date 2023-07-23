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
        int a[2*n];
        int flag[n+1] = {0};
        int seq[n],j = 0;

        for(int i = 0 ; i < 2*n ;i++)
        {
            cin>>a[i];
            if(flag[a[i]] == 0)
            {
                seq[j++] = a[i];
//                cout<<a[i]<<" "<<endl;
                flag[a[i]] = 1;
            }
        }

        for(int i = 0 ; i<n ; i++)
            cout<<seq[i]<<" ";
        cout<<endl;

    }
}

