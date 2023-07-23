#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000

//Common memset settings
//memset(memo, -1 , sizeof memo);   //intialize DP memoization with -1
//memset(arr, 0, sizeof arr);       //to clear arrray of integers

//SHORTCUTS
// ans =  a ? b:c // if(a) ans = b; else ans = c;
// and

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    std::map <string , int > teams;
    std::map <string , int > ::iterator it;
    int n;
    cin>>n;
    for(int i= 0 ; i < n;i++)
    {
        string s;
        cin>>s;
        it =  teams.find(s);
        if(it != teams.end())
        {
            teams[s]++;
        }
        else
        teams.insert(make_pair(s,1));
    }

    int ans = 0;
    string team ;
    for(map<string, int>::iterator i = teams.begin(); i!= teams.end() ; ++i)
    {
        if(i-> second > ans)
        {
            team =  i->first;
            ans = i->second;
        }

    }
    cout<<team ;

}

