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
// trueCase =  a ? b:c // if(a) trueCase = b; else ans = c;
// and

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cases;
    cin>>cases;
    while(cases--)
    {
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;

        //ll pro = a*b;

        while(n--)
        {
            if(a>=x && b>a)
            {
                a--;
                continue;
            }
            if(b >= y && b<=a)
            {
                b--;
            }

        }
        cout<<a*b<<endl;

    }

}

