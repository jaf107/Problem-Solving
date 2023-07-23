#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000

int main()
{
    int cases;
    cin>>cases;
    while(cases--){
        int n, d;
        cin>>n>>d;
        int f = n/2 + 1;
        int g = ( n/2  + (d + n/2)/f);

        if(g<= n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
