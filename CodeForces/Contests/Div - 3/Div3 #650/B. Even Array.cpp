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
        int mOdd = 0,mEven = 0;
        int n;
        cin>>n;
        int inp[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>inp[i];
            if(i%2 == 0)
            {
                if(inp[i]%2 !=  0)
                    mEven++;

//            cout<<i<<endl;
            }
            else if(i%2 == 1)
            {
                if(inp[i]%2 !=  1)
                    mOdd++;
            }
        }
//    cout<<" Missed odd is :"<<mOdd;
//    cout<<"\n Missed even is :"<<mEven<<endl;


        if(mOdd == mEven)
            cout<<mEven<<endl;
        else
            cout<<-1<<endl;

    }

}
