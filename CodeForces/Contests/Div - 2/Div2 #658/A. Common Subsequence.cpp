#include<bits/stdc++.h>
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
        int n,m;
        cin>>n>>m;

        int ans = 0;
        int c = 0;

        int a[n],b[m];
        for(int i = 0; i< n;i++)
            cin>>a[i];
        for(int i = 0; i< m;i++)
            cin>>b[i];

        for(int i=0 ;i<n;i++)
        {
            for(int j = 0; j<m;j++)
            {
                if(a[i] == b[j])
                {
                    c++;
                    ans = a[i];
                    break;
                }
            }
            if(c!=0)
                break;
        }

        if(c)
        {
            cout<<"YES"<<endl;
            cout<<c<<" "<<ans<<endl;
        }
        else
            cout<<"NO"<<endl;

    }

}
