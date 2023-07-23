
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
    char k;
    ll n;
    cin >> n >> k;
    string s;
    cin >> s;

//    s+=k;
//
//    sort(s.rbegin(), s.rend());
    string ans = "";
    bool placed = false;
//    for(int i = n-1; i > 0; i--)
    for(int i = 0; i < n; i++)
    {


        if(s[i] < k){
//            string pre =
//            s[i]
            placed = true;
            s.insert(i,1,k);
            break;
        }
    }
    if(!placed){
        s += k;
    }
    cout << s;
}

