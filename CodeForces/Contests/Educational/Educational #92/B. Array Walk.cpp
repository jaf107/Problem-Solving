
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int z,k,n;
#define INF 1000000000
int solve(int a[])
{
    int ans = a[0];


}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,k;
        cin>>n>>k>>z;

        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        cout<<solve(a,n,k,z);

    }

}
