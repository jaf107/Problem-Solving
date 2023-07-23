#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;

using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    multiset<ll> s;
    vector<int> sample(n);
    for(auto &x: sample)
    {
        cin >> x;
    }

    sort(sample.begin(), sample.begin() + n);
    int i;
    for(i = 0; i < n; i++){
        int j = i;
        while( j < n && sample[j] == sample[i]){
            j++;
        }
        s.insert((j-i)*1ll*sample[i]);
        i = j - 1;
    }
    ll sum = 0;
    ll cnt = 0;

    while(s.size() && cnt < k){
        ll ele = *s.rbegin();
        if(ele <= 0)
            break;
        sum += ele;
        cnt++;
        s.erase(s.find(ele));
    }

    cout << sum<< endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
        solve();
}
