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
        int n;
        cin>>n;
        if(n %2 == 0 )
            cout<<n/2<<endl;
        else
            cout<<n/2 + 1<<endl;

    }

}

