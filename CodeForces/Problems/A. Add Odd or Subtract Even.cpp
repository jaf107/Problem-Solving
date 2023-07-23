#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {


        int a,b;
        cin>>a>>b;
        int d = b-a;
        if(d<0)
        {
            if(d%2 == 0)
                d=1;
            else
            {
                d=2;
            }
            cout<<d<<endl;

        }
        else if(d>0)
        {
            if(d%2==0)
                d=2;
            else
                d=1;
            cout<<d<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }

    return 0;
}

