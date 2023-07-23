

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
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<pair<int, int> > pa(n);
    vector<pair<int, int> > pb(n);

    for (int i = 0; i < n; i++)
    {
        pa[i] = {a[i], i};
        pb[i] = {b[i], i};
    }
    sort(pa.begin(), pa.end());
    sort(pb.begin(), pb.end());

//    cout << "\nPA:\n";
//    for (int i = 0; i < n; i++)
//    {
//        cout << pa[i].first << " " << pa[i].second << endl;
//    }
//    cout << "\nPB:\n";
//    for (int i = 0; i < n; i++)
//    {
//        cout << pb[i].first << " " << pb[i].second << endl;
//    }

    vector<int> ans(n);

    for(int i = 0; i < n; i++)
    {
        ans[pa[i].second] = pb[i].first;
    }

    for(auto x: ans)
    {
        cout << x << " ";
    }





    return;

}
