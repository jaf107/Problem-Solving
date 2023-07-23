#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);

        //cout<<endl<<a[0]<<a[1]<<a[2]<<endl;
        int ans = a[1];
        a[2] -= a[1];

        ans += min(a[0],a[2]);

        cout<<ans<<endl;

    }

    return 0;
}
