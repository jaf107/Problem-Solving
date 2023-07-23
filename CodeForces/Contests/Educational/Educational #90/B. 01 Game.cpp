#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cases;
    cin>>cases;
    while(cases--)
    {
        string s;
        cin>>s;
        int zero = 0, one = 0;
        for(int i=0; i < s.length() ; i++)
        {
            if(s[i] == '0')
                zero++;
            else
                one++;
        }
        int x = min(zero,one);

        if(x % 2 == 0)
        {
            cout<<"NET"<<endl;
        }
        else
        {
            cout<<"DA"<<endl;
        }

    }

}

