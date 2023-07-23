
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
void solve()
{
    char grid[9][9];
    vector<int> r;
    for(int i = 0; i <8; i++){
        for(int j = 0;j < 8; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'R')
                r.PB(i);
        }
    }

    for(int i: r){
        bool ok = true;
        for(int j = 0; j < 8; j++){
            if(grid[i][j] != 'R'){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << "R";
            return;
        }

    }

    cout << "B";
    return;

    bool lastRed = false;
    bool lastBlue = false;

    for(int i = 0; i < 9; i++){
        bool red = true;
        for(int j = 0;i < 9; i++){
            if(grid[i][j] == 'R'){
                red = false;
                break;
            }
        }
        if(red){
            lastRed = true;
        }
    }
    for(int i = 0; i < 9; i++){
        bool blue = true;
        for(int j = 0;i < 9; i++){
            if(grid[i][j] == 'B' ){
                blue = false;
                break;
            }
        }
        if(blue){
            lastBlue = true;
        }
    }

    for(int i = 0; i < 9; i++){
        bool red = true;
        for(int j = 0;i < 9; i++){
            if(grid[j][i] == 'R'){
                red = false;
                break;
            }
        }
        if(red){
            lastRed = true;
        }
    }
    for(int i = 0; i < 9; i++){
        bool blue = true;
        for(int j = 0;i < 9; i++){
            if(grid[j][i] == 'B' ){
                blue = false;
                break;
            }
        }
        if(blue){
            lastBlue = true;
        }
    }

    cout << lastBlue << lastRed;
}



