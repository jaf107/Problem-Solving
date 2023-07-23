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
        int a,b;
        cin>>a>>b;

        if(a>b)
            swap(a,b);

        int steps = 0;
        while(b - a>10)
        {
            a += 10;
            steps++;
        }
        if(a != b)
            steps++;
        cout<<steps<<endl;

    }

}

