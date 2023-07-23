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
        int n, k;
        cin >> n >> k;
        if(k>(n-1)/2){
            cout << -1 << endl;
            continue;
        }

        ll ara[n] = {0};
        ll tn = n;

        for(int i = 1; i < n-1 ; i += 2)
        {
            if(k == 0)
                break;
            ara[i] = tn;
            k--;
            tn--;
        }

        ll temporaryLow = 1;
        for(int i = 0; i < n; i++){
            if(ara[i] == 0)
                ara[i] = temporaryLow++;
        }

        for(int i = 0; i < n; i++)
            cout << ara[i] << " ";
        cout << endl;
    }

    return 0;
}

