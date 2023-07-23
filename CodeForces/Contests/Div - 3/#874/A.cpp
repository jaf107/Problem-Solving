

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

void printArray(vector<ll> arr, string name)
{
    cout << name << ": ";
    for(auto x: arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

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

    set<string> sSet;
    for(int i = 0; i < n-1; i++)
    {
        string t = "";
        t+= s[i];
        t += s[i+1];
        sSet.insert(t);
//        cout << t << endl;
    }
    cout << sSet.size();


    return;

}
