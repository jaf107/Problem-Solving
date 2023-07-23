#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
void solve(int t);
double pi = 2 * acos(0.0);

int main()
{
    Faster;


//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("error.txt", "w", stderr);
//    freopen("output.txt", "w", stdout);
//#endif


    ll t; /// If there is no multiquery
    cin>>t; /// then comment this


   // while(t--)
   // {
//        cout << pi;
        solve(t);
        cout<<"\n";

   // }

    return 0;
}



void solve(int n)
{
    /// Input the number of element




    /// Input the array a[1...n]
    char c;
    for(int i = 1; i <= n; ++i){
        cin >> c;
        string str= "codeforces";
        for(int j=1;j<=str.size();j++)
        {
            if(str[j]==c)
            {
                cout<<"Yes"<<endl;
                break;
            }
            else{
            }
        }
        cout<<"No"<<endl;

    }








}
