
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
        int n;
        cin>>n;

        int a[n], no1 = 0, no2 = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];

            if(a[i] == 1)
                no1++;
            else
                no2++;
        }

        bool ans = true;
        if(no1%2 || (no2%2 == 1 && no1 == 0))
            ans = false;

        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
