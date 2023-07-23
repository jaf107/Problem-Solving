#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s;
    cin>>s;
    bool pres1 = false;
    for(i=0;i<s.length();i++)
    {
        cout<<s[i];
        if(s[i] == '1')
            break;

    }
    for(int j=i+1;j<s.length();j++)
    {
        if(s[j] == '0')
        {
            for(int k=j+1;k<s.length();k++)
                cout<<s[k];

            return 0;
        }
        else
            cout<<s[j];


    }

    return 0;
}

