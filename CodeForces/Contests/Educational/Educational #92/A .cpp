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
        int l,r;
        cin>>l>>r;
        if(r< 2*l)
        {
            cout<<-1<<" "<<-1<<endl;
        }
        else
        {
            cout<<l<<" "<<2*l<<endl;
        }

    }

}
