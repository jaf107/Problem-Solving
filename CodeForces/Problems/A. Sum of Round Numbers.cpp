#include<bits/stdc++.h>
using namespace std;
int notZeroCounter(string s)
{
    int num = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!='0')
            num++;
    }

    return num;
}
int main()
{

    int tc;
    cin>>tc;
    while(tc--)
    {

        string s;
        cin>>s;
        int l = s.length();
        cout<<notZeroCounter(s)<<endl;
        for(int i=0; i<l; i++)
        {
            if(s[i]!='0')
            {
                cout<<s[i];
                for(int j=i+1; j<l; j++)
                    cout<<0;
            }
            cout<<" ";

        }

    }

}
