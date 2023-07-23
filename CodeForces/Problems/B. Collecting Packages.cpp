#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=0;tc<t;tc++)
    {
        int n;
        cin>>n;
        vector<pair<int,int> > a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first >> a[i].second;
        }
        sort(a.begin(),a.end());
        pair<int,int> dum = make_pair(0,0);
        string ans;
        ans.clear();
        bool ok = true;
        for(int i=0;i<n;i++)
        {
            if((a[i].first < dum.first) || (a[i].second < dum.second))
            {
                cout<<"NO"<<endl;
                ok = false;
                break;
            }
            ans += string(a[i].first - dum.first,'R');
            ans += string(a[i].second - dum.second,'U');
            dum = a[i];
        }

        if(ok)
            cout<<"YES"<<endl<<ans<<endl;
    }
    return 0;
}

