#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long

using namespace std;

bool check(int cows, ll positions[],int n, ll distance){
    int countC = 1;
    ll last_position = positions[0];

    for(int i=1; i<n; i++){
        if(positions[i] - last_position >= distance){
            last_position = positions[i];
            countC++;
        }

        if(countC == cows){
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,c;
        cin >> n >> c;

        ll positions [n];
        for(int i=0; i<n; i++){
            cin >> positions[i];
        }

        sort(positions, positions+n);

        ll startP = 0, endP = positions[n-1] - positions[0];
        ll ans = -1;

        while(startP <= endP){
            ll mid = startP + (endP-startP)/2;

            if(check(c,positions,n,mid)){
                ans = mid;
                startP = mid + 1;
            }else{
                endP = mid - 1;
            }
        }

        cout << ans << endl;
    }

}
