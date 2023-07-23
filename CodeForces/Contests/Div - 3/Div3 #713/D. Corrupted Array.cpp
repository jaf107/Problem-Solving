
#include<bits/stdc++.h>
#define pushb push_back;
#define popb pop_back ;


using namespace std;


typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cases;
    cin>>cases;
    while(cases--)
    {
        ll n;
        cin >> n;

        ll b[n+2], sum = 0;
        for(ll i = 0; i < n+2; i++){
            cin >> b[i];
        }
        sort(b, b + n + 2);

        for(ll i = 0; i < n; i++)
        {
            sum += b[i];
        }

        ll ind = n;
        bool flag = false;

        if(sum != b[n] && sum != b[n+1]){
            for(int i = 0; i < n; i++)
            {
                if(sum + b[n] - b[i] == b[n+1]){
                    flag = true;
                    ind = i;
                    break;
                }
            }

        }else{
            flag = true;
        }

//        printf(" ind %d", ind);
        if(flag){
            for(int i = 0; i <= n; i++)
            {
                if(i != ind)
                    cout << b[i] << " ";
            }
            cout << endl;
        }else{
            cout << -1 << endl;

        }
    }
    return 0;
}
