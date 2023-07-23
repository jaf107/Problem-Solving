
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
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

    int t=1;
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
void solve()
{
    ll n;
    cin >> n;
    vector<int> participants(n),strenthDiff(n);
    for(auto &x: participants){
        cin >> x;
    }

    vector<int> sortedParticipants = participants;
    sort(sortedParticipants.begin(), sortedParticipants.end());

    for(ll i = 0; i < n; i++){
        if(participants[i] == sortedParticipants[n-1]){
           strenthDiff[i] = participants[i] - sortedParticipants[n-2];
           continue;
        }
        strenthDiff[i] = participants[i] - sortedParticipants[n-1];
    }

    for(auto &x: strenthDiff ){
        cout << x << " ";
    }
}
