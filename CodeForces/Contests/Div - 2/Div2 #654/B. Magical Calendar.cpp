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
        ll n,r,i;
        cin>>n>>r;

        if(n>r)
            cout<<r*(r+1)/2<<endl;
        else
            cout<<n*(n-1)/2+1<<endl;

    }
    return 0;
}
