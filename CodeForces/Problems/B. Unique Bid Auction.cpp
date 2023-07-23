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
        int n;
        cin >> n;

        vector<int> cnt(n+1), idx(n+1);

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            cnt[x]++;
            idx[x] = i + 1;
        }

        int ans = -1;

        for(int i = 0; i <= n; i++)
        {
//            printf("%d.Count: %d at %d\n",i,cnt[i], idx[i]);
            if(cnt[i] == 1)
            {
                ans = idx[i];
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
