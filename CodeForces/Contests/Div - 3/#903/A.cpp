

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
    ll n, m;
    cin >> n >> m;

    string x, tx, s;
    cin >> tx >> s;

    x = tx;
    int lx = x.size(), ls = s.size();
    int c = 0;
//    while(lx <= ls ){
//
//        x += x;
//        lx = x.size();
//        c++;
//    }
////    cout<< c << " " << x << endl << endl;
//    if(x.find(s) != string::npos){
//            cout << "ans " << c;
//            return ;
//    }
//    else{
//        x += x;
//        c++
//        if(x.find(s) != string::npos){
//            cout << "ans " << c;
//            return ;
//        }
//    }
//    cout << -1;
//    return ;
    if(lx > ls){
        if(x.find(s) == string::npos){
            x += x;
            c++;
        }

    }

    while((x.find(s) == string::npos) && lx < (2*ls) ){
        x += x;
        lx = x.size();
        c++;

    }
//    cout << c << " " << x << " " << s << endl;

    if(x.find(s) != string::npos){
        cout << c;
        return;
    }

    cout << -1;




//    int i = 0, j = 0,;
//    while(i < lx)
//    {
//        while(j < ls){
//            if(x[i] == s[j])
//            {
//                i++, j++;
//            }
//        }
//    }



    return;

}
