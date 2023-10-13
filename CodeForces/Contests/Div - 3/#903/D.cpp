

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

    vector<ll> a(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    map<int, int> divisorsCount;

    map<int, int> primeFactors;
    for(int j = 0; j < n; j++){
        int number = a[j];

    // Divide the number by 2 until it is odd
    while (number % 2 == 0) {
        primeFactors[2]++;
        number /= 2;
    }

    for (int i = 3; i * i <= number; i += 2) {
        while (number % i == 0) {
            primeFactors[i]++;
            number /= i;
        }
    }

    if (number > 1) {
        primeFactors[number]++;
    }

//        for (int i = 1; i * i <= number; i++) {
//            if (number % i == 0) {
//                // i is a divisor of the number
//                divisorsCount[i]++;
//
//                // Check if i and n/i are different divisors
//                if (i != number / i) {
//                    divisorsCount[number / i]++;
//                }
//            }
//        }
    }

    for (const auto &entry : primeFactors) {
        if(entry.second % n != 0){
            cout << "NO";
            return;
        }
//        cout << "Key: " << entry.first << ", Value: " << entry.second << endl;
    }
    cout << "YES";
    return;

}
