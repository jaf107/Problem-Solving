

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
//        cout<<"\n";
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

ll calSum(ll val)
{
    ll sum =  0;
    while(val)
    {
        sum += val%10;
        val /= 10;
    }

    return sum;
}

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n),aCounter(n,2);

    set<ll> s;

    for(int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = x;
        if(x > 9)
            s.insert(i);
    }

    for(ll qi = 0; qi < q; qi++)
    {
        ll x;
        cin >> x;

        if(x == 1)
        {
            ll l, r;
            cin >> l >> r;
            --l, --r;
            ll  lst = l;
            while(!s.empty())
            {
                auto it = s.lower_bound(lst);
                if(it == s.end() || *it > r)
                    break;
                a[*it] = calSum(a[*it]);
                ll paiu = *it;
                s.erase(it);
                if(a[paiu] > 9)
                 s.insert(paiu);
                lst = paiu + 1;
            }

//
//
//            for(ll i = l-1; i < r;i++)
//            {
//                if(aCounter[i]>0)
//                    a[i] = calSum(a[i]);
//                aCounter[i]--;
//            }
        }
        else
        {
            ll val;
            cin >> val;
            cout << a[val-1] << endl;
        }
    }

//    cout << "END";

}
