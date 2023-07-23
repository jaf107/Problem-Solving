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

int getNum(int n)
{
    int nn = n;
    int c = 0;
    while(nn > 10)
    {
        nn/=10;
        c++;
    }
    int ans = 0;
    for(int i = 0; i <= c; i++)
    {
        ans += pow(10,i);

    }
//    cout << ans << endl;
    ans *= nn;

//    cout << ans << endl;
    return ans;
}

bool checkNum(int n)
{
    if(getNum(n) <= n)
        return true;
    else if(n < 10)
        return true;
    else
        return false;
}



int main()
{
    FASTIO;
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin >> n;

        int ans = 0,c = 0;
        int as = getNum(n);

        bool caseN = checkNum(n);
        while(n > 10)
        {
            n /= 10;
            c++;

            ans += 9;
        }
        ans += (n-1);

        if(caseN)
            ans++;
        cout << ans << endl;

    }

    return 0;
}

