
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

void printVector(vector<int> a, string name)
{
    cout << name << " : ";
    for(auto x: a)
    {
        cout << x << " ";
    }
    cout << endl;
}

int pivotInteger(int n) {
        if(n == 1)
            return 1;

        vector<int> a(n);
        vector<int> cumul(n);
        for(int i = 0; i < n; i++){

            a[i] = i+1;
        }
        cumul[0] = a[0];
//        cout << " i am here ";
        for(int i = 1; i < n; i++){
            cumul[i] = cumul[i-1] + a[i];
        }

//        printVector(cumul, "Cumulative");

        for(int i = 0; i < n - 1; i++){
            if(cumul[i] == (cumul[n-1] - cumul[i+1])){
                    cout << cumul[i] << " " ;
                return i + 2;
            }
        }

        return -1;

    }

void solve()
{

    int n;
    cin >> n;

    cout << pivotInteger(n);

}

