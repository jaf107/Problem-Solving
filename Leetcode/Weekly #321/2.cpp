

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

void printVector(vector<int> a, string name)
{
    cout << name << " : ";
    for(auto x: a)
    {
        cout << x << " ";
    }
    cout << endl;
}

int appendCharacters(string s, string t)
{
    int si = 0, ti = 0;
    for(int i = si; i < s.size(); i++)
    {
        if(s[i] == t[ti])
        {
            ti++;
        }

        if(ti == t.size())
            break;
    }

    return t.size() - ti;
}
void solve()
{

    string s = "coaching" , t = "coding" ;
    cin >> s;
    cin >> t;

//    cout << s<< endl;
//    cout << t << endl;

    cout << appendCharacters(s,t);

}


