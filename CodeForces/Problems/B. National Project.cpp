#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int N,g,b,ans=0;
        cin>>N>>g>>b;

        int n = (N+1) / 2;
        ans = max((n-1) / g * (g + b) + (n-1) % g + 1, N) ;
		cout << ans << endl;

    }
    return 0;
}
