
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


    ll t=1; /// If there is no multiquery
    cin>>t; /// then comment this


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
    /// Input the number of element
    ll n;
    cin >> n;


    /// Input the array a[1...n]
    vector<ll> a(n);
    set<ll> mySet;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        mySet.insert(a[i]);
    }

    sort(a.rbegin(), a.rend());

//    ll sumTillNow = a[1];
    if(a[1] == a[0])
    {
        swap(a[1],a[n-1]);
    }
//    printVector(a, "Reverse:");



    if(mySet.size() == 1)
    {
        cout << "NO";
    }else
    {
//        cout <<"SET SIZE: "<< mySet.size();
        cout << "YES\n";
        for(int i = 0; i < n; i++)
            cout << a[i] <<" ";

    }
    return;

}

