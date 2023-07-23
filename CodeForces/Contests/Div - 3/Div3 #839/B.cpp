

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

bool beautifulMatrix(int topLeft, int topRight, int botLeft, int botRight)
{
    if((topLeft < topRight) && (botLeft < botRight))
    {
        if((topLeft < botLeft) &&(topRight < botRight))
        {
            return true;
        }
    }
    return false;
}

void solve()
{

    int topLeft, topRight, botLeft, botRight;

    cin >> topLeft >> topRight;
    cin >> botLeft >> botRight;


    bool case1 = beautifulMatrix(topLeft, topRight, botLeft, botRight);
    bool case2 = beautifulMatrix(botLeft, topLeft,botRight, topRight);
    bool case3 = beautifulMatrix(botRight,botLeft,topRight, topLeft);
    bool case4 = beautifulMatrix(topRight,botRight,topLeft,  botLeft );

    bool ans = case1 || case2 || case3 || case4;

    if(ans){
        cout << "Yes";
    }else{
        cout << "No";
    }
}
