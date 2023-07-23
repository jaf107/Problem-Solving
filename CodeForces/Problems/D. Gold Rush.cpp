

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
    ll n, m;
    cin >> n >> m;

    set<ll> uniqueSet;
    if(m > n)
    {
        cout << "NO";
        return;
    }

    queue<ll> q;
    q.push(n);
    uniqueSet.insert(n);

    int val1=1, val2=1;

    while(!q.empty()){
        ll val = q.front();
        if(val % 3 == 0
           && ((val*2) % 3) == 0
           ){

//           cout << val << endl;
            ll val1 = val/3;
            ll val2 = (val*2) /3;

//            cout << val1 << " " << val2;
            uniqueSet.insert(val1);
            uniqueSet.insert(val2);

            q.push(val1);
            q.push(val2);
        }
        q.pop();
    }

    if(uniqueSet.find(m) != uniqueSet.end()){
        cout << "YES";
    }else
    {
        cout << "NO";
    }

//    cout << endl << "Set - ";
//    for(auto x: uniqueSet)
//    {
//        cout << x << " ";
//    }
//    cout << endl;
}
