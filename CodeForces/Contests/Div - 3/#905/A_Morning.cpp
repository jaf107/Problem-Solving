
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
    string n;
    cin >> n;

    int prev = 1;
    int c = 0;
    for (int i = 0; i < 4; i++)
    {
        int steps = 0;
        int num = n[i] - '0';
        if (num == 0 && prev == 0)
        {
        }
        else if (num == 0)
        {
            steps += (10 - prev);
        }
        else if (prev == 0)
        {
            steps += (10 - num);
        }
        else
        {
            steps += abs(num - prev);
        }

        c += steps;
        c++;
        prev = num;
        // cout << num << " " << steps << " " << c << endl;
    }
    cout << c;

    return;
}
