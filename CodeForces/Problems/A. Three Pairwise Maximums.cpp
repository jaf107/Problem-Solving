#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);

        if(a[1] == a[2])
        {
            cout<<"YES"<<endl;
            if(a[0] == a[2])
            {
                cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
            }
            else
            {
                cout<<a[0]<<" "<<a[2]<<" "<<1<<endl;
            }

        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
