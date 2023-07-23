

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
        cout<<"\n";

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
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

//    sort(s.begin(), s.end());
//    cout << s << endl;
    vector<ll> small(26,0);
    vector<ll> capital(26,0);

    for(ll i = 0; i < n; i++)
    {
        // a b c d e f .... zs
        // 0 1 2 3 4 5
        if(s[i] >= 'a' )
        {
            ll index = s[i] - 'a';
            small[index]++;

        }
        else
            capital[s[i] - 'A']++;
    }
//    printVector(small,"Small  ");
//    printVector(capital,"Capital");
    ll counter = 0;
    ll rem = 0;
    for(ll i = 0; i < 26; i++)
    {
        ll noOfBurl = min(small[i], capital[i]);
        small[i] -= noOfBurl;
        capital[i] -= noOfBurl;

        counter += noOfBurl;
        rem += (small[i]/2);
        rem += (capital[i]/2);
    }
//
////    cout << counter << " " << rem << endl;
//
    ll ans = counter + min(rem, k);
//
//    cout << ans;







}
