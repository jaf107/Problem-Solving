
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

    ll t=1;
//    $ {2:/*is Single Test case?*/}
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }

//    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
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

int binarySearch(vector<ll> a, int key)
{
    int low = 0;
    int high = a.size() - 1;

    int mid;
    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(a[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return mid;
}

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for(auto &x: a)
    {
        cin >> x;
    }

    sort(a.begin(), a.end());
    vector<ll> sum(n);
    sum[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        sum[i] = sum[i-1] + a[i];
//        a[i] = a[i] + a[i-1];
    }

//    printVector(a,"Cumulative");
    for(int i = 1; i <= q; i++)
    {
        ll k;
        cin >> k;
        cout << lower_bound(sum.begin(), sum.end(), k) - sum.begin() << endl;
//        cout << binarySearch(a, k) << endl;
    }

}
