#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int a,b,d;
        cin>>a>>b;

        if(b>a)
            swap(a,b);

        d=a/b;

        if(a%b ==0 && d%2 == 0)
        {
            int c = 0;
            while(d!=1)
            {
                if(d%8 ==0)
                {
                    d/=8;
                }
                else if(d%4 == 0)
                {
                    d/=4;
                }
                else
                    d/=2;
                //cout<<"D is:"<<d<<endl;
                c++;
            }
            cout<<c<<endl;

        }
        else if(a==b)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
