

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
int trap(vector<int> height)
{
    int n = height.size();

    vector<int> minLeft(n,INT_MAX);
    vector<int> minRight(n,INT_MAX);

    vector<int> water(n,INT_MAX);

    minLeft[0] = height[0];
    for(int i = 1; i < n; i++)
    {
        minLeft[i] = max(height[i], minLeft[i-1]);
    }

    minRight[n-1] = height[n-1];
    for(int i = n-2; i >= 0; i--)
    {
        minRight[i] = max(height[i], minRight[i+1]);
    }

    int waterAmount = 0;
    for(int i = 0; i < n; i++)
    {
        water[i] = max(0LL, min(minLeft[i], minRight[i]) - height[i]);
        waterAmount += water[i];
    }

//    printArray(minLeft,  "minLeft  ");
//    printArray(minRight, "minRight ");
//    printArray(water,    "Water    ");
    return waterAmount;
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    trap(a);
}

/**
2
12
0 1 0 2 1 0 1 3 2 1 2 1
6
4 2 0 3 2 5
*/

