#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        set<int> ans;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            ans.insert(a[i]);
        }
        cout<<ans.size()<<endl;
    }
    return 0;
}
