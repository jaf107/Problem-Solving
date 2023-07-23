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
        int a,b,c;
        cin>>a>>b>>c;

        double r =  c/b;
        if(c <= a)
        {
            cout<<-1<<" "<<b<<endl;
            continue;
        }
        if(r >= a)
        {
            cout<<1<< " "<<-1<<endl;
            continue;
        }
        cout<<1<<" "<<b<<endl;

    }
    return 0;
}
