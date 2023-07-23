#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,ans = 0,disAns = 0;
        cin>>n>>x;

        int inp[n];
        vector<int> dis;
        for(int i=0;i<n;i++){
            cin>>inp[i];
            if(inp[i] % x != 0){
                dis.push_back(inp[i]);
                disAns += inp[i];
            }
            ans += inp[i];
        }
        sort(dis.begin(),dis.end());
        if(dis.size() == 0)
        {
            cout<<-1<<endl;
            continue;
        }

        if(disAns % x == 0)
        {

            cout<<n-1 <<endl;
        }
        else{
            cout<<n<<endl;
        }

    }
}

