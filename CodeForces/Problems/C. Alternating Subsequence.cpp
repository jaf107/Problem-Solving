

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
    ll n;
    cin >> n;

    vector<ll> a(n);
    for(auto &it: a)
        cin >> it;

    ll sum = 0;

    for(int i = 0; i < n; i++)
    {
        ll cur = a[i];
        int j = i;

        while(j < n )
        {
            if(a[i] > 0 && a[j] < 0)
                break;
            if(a[i] < 0 && a[j] > 0)
                break;

            cur = max(cur, a[j]);
            j++;
        }

        sum += cur;
        i = j - 1;
    }

    cout << sum;
}

/*
void solve()
{
    /// Input the number of element
    ll n;
    cin >> n;


    /// Input the array a[1...n]
    vector<ll> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    bool pos = true, neg = false;
    ll val = 0;

    if(a[0] > 0){
        neg = true;
        pos = false;
    }

    for(int i = 0; i < n; ++i){
        if(a[i] < 0 && pos){
            ll minNeg = a[i];
            while(a[i] < 0)
            {
                minNeg = max(a[i], minNeg);
                i++;
            }

            cout << "MinNeg : " << minNeg << endl;
            val += minNeg;
            pos = false;
            neg = true;
            i--;
        }
        else if(a[i] > 0 && neg)
        {
            ll maxPos = a[i];
            while(a[i]>0)
            {
                maxPos = max(maxPos, a[i]);
                i++;
            }

            cout << "MaxPos : " << maxPos<< endl;
            val += maxPos;
            pos = true;
            neg = false;
            i--;
        }
    }

    cout << val;

}
*/
/**
4
5
1 2 3 -1 -2
4
-1 -2 -1 -3
10
-2 8 3 8 -4 -15 5 -2 -3 1
6
1 -1000000000 1 -1000000000 1 -1000000000



1
10
-2 8 3 8 -4 -15 5 -2 -3 1
*/
