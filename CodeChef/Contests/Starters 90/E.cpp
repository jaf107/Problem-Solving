
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
    ll n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> alp(26,0);
    for(ll i = 0; i < n; i++)
    {
        alp[s[i] - 'a']++;
    }

    ll oddCounter = 0;
    ll evenCounter = 0;
    for(ll i = 0; i < n; i++)
    {
        if(alp[i] & 1){
            oddCounter++;
        }
        else if(alp[i]){
            evenCounter++;
        }
//        if(alp[i])
//            cout << alp[i] + 'a' << " " <<alp[i] << endl;
    }

    if(oddCounter > 1){
        cout << 0;
        return;
    }
    if(evenCounter != 0 && oddCounter == 1){
        cout << 1;
        return;
    }
    if(evenCounter && oddCounter == 0){
        cout << 1 ;
        return;
    }

    cout << 2;


    return;

}
