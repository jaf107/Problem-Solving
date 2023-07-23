

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

string decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
    string num = "";
    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        int rem = n % 2;
        binaryNum[i] = n % 2;
        num += num;
        n = n / 2;
        i++;
    }

    return num;
    // printing binary array in reverse order
//    for (int j = i - 1; j >= 0; j--)
//        cout << binaryNum[j];
}

string toBinary(int n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
void solve()
{
    ll n;
    cin >> n;

    if(n%2 == 0)
    {
        cout << -1;
        return;
    }

    vector<ll> ansArray;
//    while(n > 0)
//    {
//        ll rem = n%2;
//        if(rem == 1)
//        {
////            ansArray
//        }
//    }

    string bin = toBinary(n);

    for(int i = 0; i< bin.size()-1; i++)
    {
        if(bin[i] == '0')
            ansArray.push_back(1);
        else
            ansArray.push_back(2);
    }

    cout << ansArray.size() << endl;
    for(auto x: ansArray){
        cout << x << " ";
    }



}
