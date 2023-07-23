
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
        int a[n];

        bool even = false;
        int evenI = -1;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]%2 == 0 && even == false)
            {
//                cout << "a[i] " << a[i]<< " " << i << endl;
                even = true;
                evenI = i;
            }

        }

        if(even)
        {
            cout << 1 << endl;
            cout <<  evenI+1 << endl;
            continue;
        }

        if(n>1)
        {
            int odd1 = 0, odd2 = 0;
            for(int i = 0; i < n; i++)
            {
                if(a[i]%2 != 0)
                {
                    if(odd1 == 0)
                    {
                        odd1 = i + 1;
                    }else{
                        odd2 = i + 1;
                        break;
                    }
                }
            }
            cout << 2 << endl;
            cout << odd1 << " " << odd2 << endl;
        }else
        {
            cout << -1 << endl;
        }

    }

    return 0;
}
