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
        string s;
        cin>>s;
        if( n < 2)
        {
            cout<<-1<<endl;
        }
        else
        {
            int fo = 0,so = 0;
            for(int i = 0 ; i< n ; i++)
            {
                if(s[i] %2 != 0)
                {
                    if(fo == 0)
                        fo = s[i] - 48;
                    else if(so == 0)
                        so = s[i] - 48;

                }
                if(so && fo)
                    break;
            }
            if(so && fo)
            {
                cout<<fo<<so<<endl;
            }
            else
                cout<<-1<<endl;

        }

    }
}
