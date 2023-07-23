
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


    vector<vector<ll > > grid(n, vector<ll> (n,0));
    vector<ll> diff(n*n -1, 1);
    vector<ll> values(n*n , 1);

    ll maxVal = n*n;
    ll minVal = 1;

    bool alter = true;

    for(int i = 0; i < n * n; i++)
    {
        if(alter)
            values[i] = maxVal--;
        else
            values[i] = minVal++;
        alter = !alter;
    }

//    printVector(values,"Values");

    alter = true;

    ll vi = 0;
    for(int i = 0; i < n; i++)
    {
        if(alter)
        {
            for(int j = 0; j < n;j++)
                grid[i][j] = values[vi++];
        }else
            for(int j = n-1; j > -1 ; j--)
                grid[i][j] = values[vi++];
        alter = !alter;
    }


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }





}

