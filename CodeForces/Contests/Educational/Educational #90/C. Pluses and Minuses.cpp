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

    ll cases;
    cin>>cases;
    while(cases--)
    {
        string s;
        cin>>s;

        ll res = 0,cur = 0;

        for(int i=0;i< s.length() ; i++)
        {
            res++;
            if(s[i] == '+')
                cur++;
            else
                cur--;

            if(cur<0)
            {
                cur++;

                res += i+1;
            }

        }


        cout<<res<<endl;

    }

}


