
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

    vector<ll> a(n+1), where(n+1);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        where[a[i]] = i;
    }

    ll left = (n+1)/2;
    ll right = (n+2)/2;

    ll answer = (n+1)/2;


    while(left >= 1 && (left == right || (where[left] < where[left+1] && where[right-1] < where[right] )))
    {

        left--;
        right++;
        answer--;
    }
    cout << answer;
//    printVector(a, "Array  ");
//    printVector(where, "Places ");




}

