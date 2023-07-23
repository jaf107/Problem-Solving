#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;

        string s1 = "", s2 = "";
        for(int i=0; i<n ; i++)
        {
            if(str[i] == '0')
                s1 += '0';
            else
                break;
        }
        for(int i = n-1; i>= 0 ;i--)
        {
            if(str[i] == '1')
                s2 += '1';
            else
                break;
        }

        if((int)s1.length() + (int)s2.length() < n)
        {
            string ans =  s1;
            ans += '0';
            ans += s2;
            cout<<ans << endl;
        }
        else
        {
            string ans = s1 + s2;
            cout<<ans << endl;
        }

    }


}

