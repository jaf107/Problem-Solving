#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    ll arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    queue<ll> q;
    int count_n = 0;
    int end_p = n-1;

    while(n--){
        int curr_n;
        cin >> curr_n;
        ll ans;
        for(; count_n < curr_n; count_n++){
            if(end_p >= 0 && q.empty()  || arr[end_p] >= q.front()){
                ans = arr[end_p];
                end_p--;
            }else{
                ans = q.front();
                q.pop();
            }
            q.push(ans /2);
        }
        cout << ans << endl;
    }


    getchar();
    return 0;
}
