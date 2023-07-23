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

        int a[n+1],score[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            score[i] = 0;
        }

        int mAns = 0,pv= 0;
        for(int i=1; i<=n; i++)
        {
            pv = i;
            int v = a[i];

            score[i] += v;
            pv+=v;
            while(pv<=n)
            {
                score[i] += a[pv];
                pv += a[pv];
            }
            mAns = max(mAns,score[i]);
        }

        cout<<mAns<<endl;

    }

}

