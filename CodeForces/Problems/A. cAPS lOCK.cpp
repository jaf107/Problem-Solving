
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
typedef long long ll;
using namespace std;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("error.txt", "w", stderr);
//    freopen("output.txt", "w", stdout);
//#endif

    ll t=1;
//    $ {2:/*is Single Test case?*/}
     cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }

//    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
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

string capsConverter(string s)
{
    bool startSmall= false;

    for(int i = 0; i < s.size(); i++)
        if(s[i] >= 'a' && s[i] <= 'z')
            startSmall = true;

    if(s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - 32;


    if(startSmall)
    {
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
                continue;
            s[i] = s[i] + 32;
        }
    }
    return s;
}

void solve()
{
    string s;
    cin >> s;

    cout << capsConverter(s);

}

