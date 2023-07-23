

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

ll getLuck(ll num)
{
    string numS = to_string(num);

    sort(numS.begin(), numS.end());
//    cout << numS << endl;

    return numS[numS.size()-1] - numS[0];
}

void solve()
{
    ll l,r;
    cin >> l >> r;

    ll lucky = l, t = getLuck(l),i;
    for(i = l; i <= r; i++)
    {

        ll luck = getLuck(i);
        if(luck > t)
        {
            t = luck;
            lucky = i;
        }

        if(t == 9)
        {
            cout << lucky ;
            return;
        }
    }
    cout << lucky ;

}
