#include<bits/stdc++.h>
using namespace std;

int number(char a, char b, char c)
{
    a -= '0';
    b -= '0';
    c -= '0';


    int n = a*100 + b*10 + c;


    return n;
}

int main()
{
    string s;
    cin>>s;

    int l = s.length();
    if(l < 3)
    {

        if(s[0] == '8' || s[1] == '8')
        {
            cout<<"YES"<<endl;
            cout<<8;
            return 0;
        }
        if(s[0] == '0' || s[1] == '0')
        {
            cout<<"YES"<<endl;
            cout<<0;
            return 0;
        }

        int n = (s[0]-'0')*10 + s[1]-'0';
        if(n%8==0)
        {
            cout<<"YES"<<endl;
            cout<<n;
            return 0;

        }


    }
    for(int i=0;i<l;i++)
    {
        for(int j = i+1; j<l ;j++)
        {
            for(int k=j+1; k<l;k++)
            {
                if(number(s[i],s[j],s[k]) % 8 == 0)
                {
                    cout<<"YES"<<endl;
                    cout<<s[i]<<s[j]<<s[k];
                    return 0;
                }
            }
        }
    }

    for(int i=0; i< l; i++)
    {
        if(s[i] == '0')
        {
            cout<<"YES"<<endl;
            cout<<0;
            return 0;
        }
        if(s[i] == '8')
        {
            cout<<"YES"<<endl;
            cout<<0;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;

}
