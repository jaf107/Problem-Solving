
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
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    int ans = 0;
    int oddC = 0, evenC = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            evenC++;
        }
        if (a[i] % k == 0)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << 0;
        return;
    }

    set<int> set;
    map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] % k))
        {
            int want = (k - (a[i] % k));
            set.insert(want);
            map[want]++;
        }
        else
        {
            set.insert(0);
        }
    }

    if (k % 2)
    {
        ans = *set.begin();
    }
    else
    {
        if (k == 2)
        {
            ans = evenC > 0 ? 0 : 1;
        }
        else
        {
            // cout << map[1];

            if (evenC >= 2)
            {
                ans = 0;
            }
            else if (evenC == 1)
            {
                ans = 1;
            }
            else
            {
                if (map[1])
                {
                    ans = 1;
                }
                else
                {
                    ans = 2;
                }
            }
        }
    }
    cout << ans;

    return;
}
