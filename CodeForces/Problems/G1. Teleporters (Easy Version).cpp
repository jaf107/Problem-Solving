
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
    ll n, c;
    cin >> n >> c;


    /// Input the array a[1...n]
    vector<ll> a(n+1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }

    for(ll i = 1; i <= n; i++)
    {
        a[i] += i;
    }

//    printVector(a, "A");

    sort(a.begin() + 1, a.end());

    ll coun = 0;
    for(ll i = 1; i <= n; i++){
        if(c >= a[i]){
            c -= a[i];
            coun++;
        }
    }

    cout << coun;

//    for(ll i = 2; i <= n; i++)
//    {
//        a[i] = a[i] + a[i-1];
//    }
//    ll index = n;
//    for(ll i = 0; i <= n; i++)
//    {
//        if(a[i] > c)
//        {
//            cout << "I is " << i << endl;
//            index = i;
//            break;
//        }
//    }
//    printVector(a, "\nA");

//    cout <<"C is "<< c  << " \n";
//    cout << index - 1;






}

