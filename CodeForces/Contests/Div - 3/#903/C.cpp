
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

typedef long long ll;
using namespace std;
void solve();

void printArray(vector<ll> arr, string name)
{
    cout << name << ": ";
    for(auto x: arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
//    $ {2:/*is Single Test case?*/}
     cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }

    return 0;
}

char grid[1000][1000];
void solve()
{
    ll n;
    cin >> n;


    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < n; j++){

            cin >> grid[i][j];
        }
    }
//    for(ll i = 0; i < n; i++)
//    {
//        for(ll j = 0; j < n; j++){
//            cout << grid[i][j];
//        }
//        cout << "\n";
//    }

    int mid = n/2;

//    for(int i = 0; i < mid; i++){
//        for(int j = 0; j < mid; j++){
//
//        }
//    }

    cout << "\nAnalysis:\n";

    for (int step = 0; step < n; step++) {

        for (int i = 0; i <= mid; i++) {

            int idx = i + (step % n);
            int jdx = n - i - 1;

            char firstX = grid[idx][idx];
            char lastX = grid[idx][jdx];
            char firstY = grid[jdx][idx];
            char lastY = grid[jdx][jdx];

            cout << firstX << " " << lastX << " " << firstY << " "<< lastY << endl;
        }
        cout << endl;
    }


    return;

}
