#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long

using namespace std;

int ans(int a, int b){
    if(a == 0)
        return 0;


    return 1+ min(ans(a/b,b),1 + ans(a/b,b+1));
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int a, b;
        cin >> a >> b;

        if(b==1)
            cout << 1 + ans(a, b+1) <<endl;
        else
            cout << ans(a,b) << endl;
    }
}
