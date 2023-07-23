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

    string s;
    cin>>s;

    int num = s[0] - 48;
    num = min(num, 9 - num);
    if(num != 0)
        cout<<num;
    else
        cout<<s[0];

    for(int i = 1; i< s.length() ;i++)
    {

        num = s[i] - 48;
        num = min(num, 9- num);
        cout<<num;
    }
}

