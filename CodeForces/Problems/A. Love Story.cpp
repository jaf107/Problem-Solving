
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
    string templateCF = "codeforces";
    string s;
    cin >> s;

    int c = 0;
    for(int i = 0; i < templateCF.size(); i++)
    {
        if(templateCF[i]!= s[i] )
            c++;
    }
    cout << c;


}

