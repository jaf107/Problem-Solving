
#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


typedef long long ll;

const int N     = (int) 1e6+5;
const int M     = (int) 1e9+5;
const int mod   = (int) 1000000007;

void solve();

vector<ll> divisors[N];

int main()
{
    Faster;

    for(ll i = 1; i <= 100000; i++)
    {
        for(ll d = 1; d*d <= i; d++)
        {
            if( i % d == 0)
            {
                divisors[i].push_back(d);
                if(d * d != i)
                {
                    divisors[i].push_back(i/d);
                }

            }
        }
    }

//    for(ll i = 1; i <= 100000; i++)
//    {
//        for(ll d = 1; d <= divisors[i].size(); d++)
//        {
//            cout << divisors[i][d] << end;
//        }
//        cout << endl;
//    }

    ll t=1; /// If there is no multiquery
    cin>>t; /// then comment this


    while(t--)
    {

        solve();
        cout<<"\n";

    }

    return 0;
}

void printMap(map<ll,ll> m, string name)
{
    cout << name << " : \n";
    for(auto x: m)
    {
        cout << " " << x.first << " " <<  x.second << endl;
    }
    cout << endl;

}

void printVector(vector<ll> a, string name)
{
    cout << name << " : ";
    for(auto x: a)
    {
        cout << x << " ";
    }
    cout << endl;
}

void solve()
{
    /// Input the number of element
    ll n , m;
    cin >> n >> m;


    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }

    ll ans = LONG_MAX;
    ll captured = 0;
    vector<ll> cnt(m+1, 0);

    ll l = 0, r = -1;
    while(r < n)
    {
        if( captured >= m)
        {
            ans = min(ans, a[r] - a[l] );
            for(auto d:divisors[a[l]])
            {
                if(d > m)
                    continue;
                if(cnt[d] == 1)
                    captured--;

                cnt[d]--;
            }
            l++;
        }
        else
        {
            r++;
            if(r == n)
                break;
            for(auto d:divisors[a[r]])
            {
                if(d > m)
                    continue;
                if(cnt[d] == 0)
                {
                    captured++;
                }
                cnt[d]++;
            }
        }
    }

    if(ans == LONG_MAX)
        ans = -1;

    cout << ans;




}
