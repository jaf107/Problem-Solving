#include<bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define INFL 9223372036854775807
#define pii pair<int,int>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define ll long long
#define ull unsigned long long
#define M 1000000007
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define take(x) scanf("%d",&x)
#define DE(x) printf("\ndebug %d\n",x);
#define vout(x) for(int i=0;i<x.size();i++) printf("%d ",x[i]);
#define pie acos(-1)
#define MOD 1000000007
#define MAX 1000005

void solve()
{
    int n;
    cin >> n;

    int res = 0;
    for(ll pw = 1; pw <= n; pw = pw* 10 + 1)
    {
        for(int d = 1; d <= 9; d++)
        {
            if (pw*d <= n)
                res++;
        }
    }

    cout << res << endl;
}

int main()
{
    FASTIO;
    int cases;
    cin>>cases;
    while(cases--)
    {
        solve();
    }

    return 0;
}


