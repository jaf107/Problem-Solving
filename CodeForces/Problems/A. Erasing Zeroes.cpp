#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l = s.length(),ans=0;

        for(int i=0; i<l; i++)
        {
            if(s[i] == '1')
            {
                for(int j=i+1; j<l; j++)
                {

                    if(s[j] == '1')
                    {
                        ans += (j-i-1);
                        break;
                    }

                }
            }

        }
        cout<<ans<<endl;
    }
    return 0;

}
