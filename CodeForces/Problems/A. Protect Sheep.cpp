//A. Protect Sheep

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
//     cin>>t;
    while(t--)
    {
        solve();
//        cout<<"\n";
    }

//    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}
void solve()
{
    ll r, c;
    cin >> r >> c;


    vector<string> field(r);
    for(ll i = 0 ; i < r; i++)
    {
        cin >> field[i];
    }
    bool flag = true;
    for(ll i = 0 ; i < r; i++)
    {
        for(ll j = 0; j < c; j++)
        {
            if(field[i][j] == 'S')
            {
                if(i)
                {
                    if(field[i-1][j] == 'W')
                        flag = false;
                }
                if(i < r - 1)
                {
                    if(field[i+1][j] == 'W')
                        flag = false;
                }
                if(j)
                {
                    if(field[i][j-1] == 'W')
                        flag = false;
                }

                if(j < c-1)
                {
                    if(field[i][j+1] == 'W')
                        flag = false;
                }
            }
        }
    }

    if(flag)
    {
        cout << "YES" << endl;
        for(ll i = 0; i < r; i++)
        {
            for(ll j = 0; j < c; j++)
            {
                if(field[i][j] == '.')
                    field[i][j] = 'D';
            }
        }

        for(auto x : field)
        {
            cout << x << endl;
        }
    }
    else
    {
        cout << "No";
    }



}
