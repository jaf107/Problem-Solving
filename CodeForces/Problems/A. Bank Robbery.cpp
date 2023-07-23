#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int n,ans = 0,r;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>r;
        if(b<r && r<c)
            ans++;
    }
    cout<<ans;
}
