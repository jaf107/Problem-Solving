
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

string DecimalToBinary(int num)
{
    string str="";
    if(num == 0)
        return "0";
    while(num)
    {
        if(num & 1) // 1
            str+='1';
        else // 0
            str+='0';
        num>>=1; // Right Shift by 1
    }
//    while(str.size() < 11){
//        string newStr = "0";
//        newStr += str;
//
//        str = newStr;
//    }
    return str;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<string> binaryVal(n);
    for(int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = x;
        binaryVal[i] = DecimalToBinary(x);
    }

    for(int i = 0; i < n; i++)
    {
        cout << DecimalToBinary(a[i]) << endl;
    }

}

