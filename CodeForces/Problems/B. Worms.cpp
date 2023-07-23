
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
typedef long long ll;
using namespace std;
void solve();
void solve2();
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        solve();
//    solve2();
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
void solve2()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(i != 0) arr[i] += arr[i-1];
    }
    int m;
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        int val;
        scanf("%d", &val);
        int t = lower_bound(arr, arr+n, val) - arr + 1;
        printf("%d\n", t);
    }
    return;
}
void solve()
{
    /// Input the number of element
    ll n;
    cin >> n;


    /// Input the array a[1...n]
    ll a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(i != 0)
            a[i] += a[i-1];
    }


    ll query;
    cin >> query;

    while(query--)
    {
        ll q;
        cin >> q;
        ll t = lower_bound(a,a+n,q) - a + 1;
        cout << t << endl;
    }



    return;

}

