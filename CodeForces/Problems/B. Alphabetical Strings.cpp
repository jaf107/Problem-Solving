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
        string s;
        cin >> s;

        ll L = s.find('a');
        if(L == string::npos)
        {
            cout << "NO" << endl;
            continue;
        }

        ll n = s.length(), R = L;

        bool yes = true;
        for(ll i = 1; i < n; i++)
        {
            ll pos = s.find(char('a' + i));
            if(pos == string::npos || ( pos != L - 1 && pos != R + 1 ))
            {
                yes = false;
                break;
            } else{
                L = min(L, pos);
                R = max(R, pos);
            }
        }

        cout << (yes ? "Yes": "No") << endl;

    }

    return 0;
}

