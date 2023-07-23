

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
void solve();
double pi = 2 * acos(0.0);

int main()
{
    Faster;


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
//        cout<<"\n";

    }

    return 0;
}

void printMap(map<ll,ll> m, string name)
{
    cout << name << " : \n";
    for(auto x: m)
    {
        cout << " " << x.first << " " <<  x.second << endl;
    }
    cout << endl;

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
    /// Input the number of element
    ll n;
    cin >> n;


    /// Input the array a[1...n]
    vector<ll> a(n+1);
    vector<ll> penOwner(n+1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        penOwner[i] = i;
    }


    vector<ll> noOfPens(n+1, 1);

    ll q;
    cin >> q;

    vector<ll> ans;
    while(q--)
    {
        ll type;
        cin >> type;

        if(type == 1)
        {
            ll opponent1, opponent2;
            cin >> opponent1 >> opponent2;

            if(opponent1 > opponent2)
            {
                a[opponent1] += a[opponent2];
                a[opponent2] = 0;

                noOfPens[opponent1]++;
                noOfPens[opponent2]--;

                penOwner[opponent2] = opponent1;

            }
            else if(opponent1 < opponent2)
            {
                a[opponent2] += a[opponent1];
                a[opponent1] = 0;

                noOfPens[opponent2]++;
                noOfPens[opponent1]--;

                penOwner[opponent1] = opponent2;

            }
        }
        else if(type == 2)
        {
            ll index;
            cin >> index;

            ans.PB(noOfPens[index]);
//            cout << noOfPens[index] << endl;
        }
        else if(type == 3)
        {
            ll penIndex;
            cin >> penIndex;

            ans.PB(penOwner[penIndex]);
//            cout << penOwner[penIndex] << endl;
        }
    }

    for(auto x: ans)
    {
        cout << x << endl;
    }







}
