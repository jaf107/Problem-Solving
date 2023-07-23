

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
    string s;
    cin >> s;

    s+=s;


    int k = 0, z = 0;
    for(char c:s)
    {
        z = c == '1'? z+1 : 0;
        k = max(k,z);
    }

    const int n = s.size()/2;

    if(k > n)
    {
        cout << (ll)n*n;
    }else
    {
        ll a = (k+1)/2;
        ll b = (k+2)/2;
        cout << a*b;
    }

}
