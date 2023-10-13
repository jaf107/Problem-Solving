

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

    vector<ll> a(3);
    for(ll i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());



    int lcm = __gcd(__gcd(a[0], a[1]), a[2]);

    int cuts = ((a[1]/lcm) -1) + ((a[2]/lcm) - 1) + ((a[0]/lcm) - 1) ;
//    cout << "CUTS : " << cuts ;

    if(cuts > 3){
        cout << "NO";
    }else{
        cout << "YES";
    }





    return;

}
