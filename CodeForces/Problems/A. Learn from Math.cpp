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
#define MAX 1000001

vector<bool> isPrime(MAX+1, true);

void sieve()
{
    isPrime[0] = false;
    isPrime[1] = false;

    ll n = MAX;
    for(ll i = 2; i <= n; i++)
    {
        if(isPrime[i] && i*i <=n )
        {
            for(ll j = i*i; j <= n; j = j + i)
                isPrime[j] = false;
        }
    }

//    for(int i = 1; i <= 100; i++)
//        if(isPrime[i])
//        cout << i << " ";
//    cout << endl;
}

int main()
{
    FASTIO;
    int n;
    cin >> n;

    sieve();

    int ans1 = n/2 - 1;
    int ans2 = n/2 + 1;
    if(n%2)
    {
        ans1++;
    }

    while(1)
    {
        if(isPrime[ans1] == false && isPrime[ans2] == false)
            break;
        ans1--;
        ans2++;
    }
    cout << ans1 << " " << ans2;

    return 0;
}
