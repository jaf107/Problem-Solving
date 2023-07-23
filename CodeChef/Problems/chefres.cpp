#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long

using namespace std;
int main()
{
    int tc;
    cin >> tc;

    while(tc--){
        int n,m;
        cin >> n >> m;

        vector<pair<int, int> > intervals;
        for(int i = 0; i < n; i++){
            int start,endI;
            cin >> start >> endI;
            intervals.pb(mp(start, endI));
        }
        sort(intervals.begin(),intervals.end());
        while(m--){
            int curr_time;
            cin >> curr_time;

            int position = lower_bound(intervals.begin(),intervals.end(),mp(curr_time,0))
                            - intervals.begin() ;
            if(position == 0){
                int ans = intervals[0].first - curr_time;
                cout << ans << endl;
            }else{
                int ans = -1;
                if(intervals[position-1].second > curr_time){
                    ans = 0;
                }else if(position < intervals.size()){
                    ans = intervals[position].first - curr_time;
                }

                cout << ans << endl;
            }
        }

    }
    return 0;
}
