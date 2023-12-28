
#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; a < b; i++)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

typedef long long ll;
using namespace std;
void solve();

void printArray(vector<ll> arr, string name)
{
    cout << name << ": ";
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //    $ {2:/*is Single Test case?*/}
    cin >> t;
    while (t--)
    {
        solve();
        // cout << "\n";
    }

    return 0;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<char, int> map;
    for (auto x : s)
    {
        map[x]++;
    }

    int odd = 0, even = 0;
    for (auto x : map)
    {
        if (x.second % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    if (odd - k > 1)
    {
        NO;
    }
    else
    {
        YES;
    }

    return;
}
