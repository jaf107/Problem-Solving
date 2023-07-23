

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
void solve();
double pi = 2 * acos(0.0);

int main()
{
    Faster;


//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("error.txt", "w", stderr);
//    freopen("output.txt", "w", stdout);
//#endif


    ll t=1; /// If there is no multiquery
    cin>>t; /// then comment this


    while(t--)
    {
        solve();
        cout<<"\n";

    }

    return 0;
}

void printMap(map<ll,ll> m, string name)
{
    cout << name << " : \n";
    for(auto x: m)
    {
        cout << " " << x.first << " " <<  x.second << endl;
    }
    cout << endl;

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

void solve()
{
    /// Input the number of element
    ll n;
    cin >> n;


    ll sizeOfStrings = ((2*n) - 2);
    /// Input the array a[1...n]
    vector<string> s(sizeOfStrings);
    for(int i = 0; i < sizeOfStrings; ++i){
        cin >> s[i];
        sort(s[i].begin(), s[i].end());
    }

    map<string, ll> counterMap;


    for(auto x: s)
    {
        counterMap[x]++;
    }

    ll tru = true;

    for(auto i: counterMap)
    {
        if(i.second != 2)
        {
            tru = false;
            break;
        }
//        cout << i.first << " " << i.second << endl;
    }

    if(tru)
    {
        cout << "YES";
    }else
    {
        cout << "NO";
    }






}
