

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
//    cin>>t; /// then comment this


    while(t--)
    {
//        cout << pi;
        solve();
//        cout<<"\n";

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

ll constructNum(ll power)
{
    if(power == 0)
        return 0;

    ll reqNo = 0;

    while(power--)
    {
        reqNo += 9*pow(10,power);
    }

    return reqNo;
}

ll calculateValue( ll power)
{
    ll ans  = 0;
    for(int i = 0; i < power;i++)
    {
        ans += (9 * pow(10,i) * (i+1));
    }

    return ans;
}

void solve()
{
    /// Input the number of element
    ll n;
    cin >> n;

    ll temp = n;

    ll digits = 0;

    while(temp)
    {
        digits++;
        temp /= 10;
    }

    ll multipleOfNine = constructNum(digits-1);
    ll diff = n - multipleOfNine;

    ll finalVal = calculateValue(digits-1);

    cout << diff *(digits) + finalVal ;







}
