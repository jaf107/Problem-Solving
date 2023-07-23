
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

int main()
{
    FASTIO;
    int cases;
    cin>>cases;
    while(cases--)
    {
        vector<int> a(2), b(2), f(2);
        cin >> a[0] >> a[1];
        cin >> b[0] >> b[1];
        cin >> f[0] >> f[1];

        int ans = abs(a[0] - b[0]) + abs(a[1] - b[1]);

        if((a[0] == b[0] && a[0] == f[0] && min(a[1], b[1]) < f[1]&& max(a[1], b[1]) > f[1] )
           || (a[1] == b[1] && a[1] == f[1] && min(a[0], b[0]) < f[0] && max(a[0], b[0]) > f[0] ))
           ans += 2;

        cout << ans << endl;

    }

    return 0;
}
