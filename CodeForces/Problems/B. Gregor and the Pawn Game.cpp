

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
void solve();
double pi = 2 * acos(0.0);
const int Max = 2e5 + 5;

ll n;
string s1, s2;
bool visit[Max];


int main()
{
    Faster;
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

ll check(ll i)
{
    if(s1[i] == '1')
    {
        if(s1[i-1] == '1' && visit[i - 1])
        {
            visit[i - 1] = false;
            return 1;
        }
        if(s1[i+1] == '1' && visit[i + 1])
        {
            visit[i + 1] = false;
            return 1;
        }
        return 0;
    }
    else
        return 1;

}

void solve()
{
    cin >> n;
    cin >> s1 >> s2;

    memset(visit, true, sizeof visit);

    ll ans = 0;
//    for(ll i = 0; i < n; i++)
//    {
//        if(s2[i] == '1')
//        {
//            ans += check(i);
//        }
//    }

    for(ll i = 0; i < n; i++)
    {

        if(s2[i] == '1')
        {
            if(s1[i] == '1')
            {
                if(s1[i - 1] == '1'){
                    s1[i - 1] = '0';
                    ans++;
                }
                if(s1[i + 1] == '1'){
                    s1[i + 1] = '0';
                    ans++;
                }
            }
            else
                ans++;

//            if(i == 0)
//            {
//                if(s1[i] == '0')
//                    ans++;
//                else if(s1[i+1] == '1')
//                {
//                    s1[i+1] == '0';
//                    ans++;
//                }
//
//            }
//            else if(i == n-1)
//            {
//                if(s1[i] == '0')
//                    ans++;
//                else if(s1[i-1] == '1')
//                {
//                    s1[i-1] == '0';
//                    ans++;
//                }
//            }
//
//            else
//            {
//                if(s1[i - 1] == '1')
//                {
//                    s1[i-1] == '0';
//                    ans++;
//                }
//                else if(s1[i] == '0')
//                    ans++;
//                else if(s1[i+1] == '1')
//                {
//                    s1[i+1] == '0';
//                    ans++;
//                }
//            }
        }
    }

    cout << ans;






}
