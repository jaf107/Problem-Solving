

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

typedef long long ll;
using namespace std;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
//    $ {2:/*is Single Test case?*/}
     cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }

    return 0;
}
void solve()
{
    string s;
    cin >> s;

    ll sizeString = s.size();

    if(s[0] == '0')
    {
        cout << 0;
        return;
    }

    ll ans = s[0] == '?' ? 9 : 1;

    for(int i = 1; i < sizeString; i++)
    {
        if(s[i] == '?')
        {
            ans *= 10;
        }
    }

    cout << ans ;

}
