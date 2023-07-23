
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

    ll t=1;
     cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
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

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    map<string, ll> myMap;
    bool flag = false;

    string prev;

    for(int i = 1; i < n; i++)
    {

        string sub = s.substr(i-1,2);
//        cout << sub << endl;

        if(myMap[sub]){
            flag=true;
            break;
        }
        if(!prev.empty()){
            myMap[prev]++;
        }
        prev = sub;
    }

//    cout << endl;
    if(flag)
        cout << "Yes";
    else
        cout << "No";

}

