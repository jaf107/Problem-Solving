
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
        cout << "\n";
    }

    return 0;
}
int val(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans += (s[i] - '0');
    }
    return ans;
}
void solve()
{
    ll x, k;
    cin >> x >> k;

    for (int i = 0; i < 19; i++)
    {
        string xs = to_string(x + i);
        int v = val(xs);
        // cout << v << " ";
        if ((v) % k == 0)
        {
            cout << x + i;
            return;
        }
    }

    return;
}
