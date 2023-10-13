

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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}
void solve()
{
    ll n;
    cin >> n;

    int queryType;
    vector< pair<int, int> > employee;
    while(n--){
        cin >> queryType;
        if(queryType == 2){
            cout << employee.size() << endl;
//           cout << "\nEmployee List: \n";
//            for (auto it = employee.begin(); it != employee.end();it++){
//                cout << "  " << it->first << " " << it->second << endl;
//            }
        }
        else{
            int ai, bi;
            cin >> ai >> bi;


            bool isSmall = false;
            for (auto it = employee.begin(); it != employee.end();) {
//                if (it->first  <= ai && it->second <= bi) {
//                    it = employee.erase(it);
//                } else
//
                if (ai <= it->first && bi <= it->second){
                    isSmall = true;
                } else{
                    it++;
                }
            }
            if(!isSmall)
                employee.push_back({ai, bi});

            for(int i = 0; i < employee.size(); i++){
                for(int j = 0; j < employee.size() && j!=i; j++)
                {
                    if (employee[i].first <= employee[j].first && employee[i].second <= employee[j].second) {
                        cout << " I am here \n";
                        employee.erase(employee.begin() + i);

                    }
                }
            }

        }
    }



    return;

}
