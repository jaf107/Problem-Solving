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
        while(n!=0)
        {
            if(n%2 == 1)
            {
                cout<<7;
                n-=3;
            }
            else
            {
                cout<<1;
                n-=2;
            }
        }
        cout<<endl;
    }
    return 0;

}
