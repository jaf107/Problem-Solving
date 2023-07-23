#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int r = a%b;
        if(a<b)
        {
            cout<<b-a<<endl;
            continue;
        }
        else if(r==0)
        {
            cout<<r<<endl;
            continue;
        }

        //cout<<"R is :"<<r<<endl;
        //int ans = min(r, abs(b-r));
        cout<<abs(b-r)<<endl;
    }
}
