

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

    bool flag[n] = {0};
    bool ans = true;

    vector<ll> alp[26];
    for(ll i = 0; i < n; i++)
    {
        ll p = s[i] - 'a';
        alp[p].PB(i);
    }

//    bool ans = true;
    for(ll i = 0; i < 26; i++)
    {
        vector<ll> t = alp[i];
        ll tSize = t.size();
        if(tSize > 1){
            for(ll j = 0; j < tSize - 1; j++){
                if(t[j] % 2 != t[j+1] % 2){
                    ans = false;
                }

            }
        }
//        cout << endl;
    }

//    for(ll i = 0; i < n; i++)
//    {
//        char x = s[i];
//
//        for(ll j = i + 1; j < n; j++)
//        {
//            char y = s[j];
//            if(flag[j]){
//            if(x == y){
////                cout << x << y << endl;
//                if( i % 2 == j % 2){
//                    ans = false;
//                }
//                flag[j] = 1;
//            }
//            }
//        }
//        flag[i] = 1;
//    }
//
    if(ans ){
        cout << "Yes";
    }else
    {
        cout << "No";
    }
//    map<char, int> alpha;
//    vector<int> pos(26);
//    for(int i = 0; i < n; i++)
//    {
//        int p = s[i] - 'a';
//        pos[]
//
//        char x = s[i];// - 'a';
////        cout << x;
//        if(alpha[x] != 0){
//
//        }
//        alpha[x]++;
//    }
//    cout << endl;
//    for(auto x: alpha){
//        cout << x.first <<" " <<x.second << endl;
//    }

}
