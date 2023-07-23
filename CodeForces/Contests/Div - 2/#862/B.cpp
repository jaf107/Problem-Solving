

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
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
    ll n;
    cin >> n;

    string s;
    cin >> s;

    char minChar = 'z';
    int minI = -1;
    for(int i = 0; i < n; i++)
    {
        if(s[i] < minChar){
            minChar = s[i];
            minI = i;
        }
    }

    if(minI != -1)
        swap(s[0],s[minI]);
    cout << s;
}
