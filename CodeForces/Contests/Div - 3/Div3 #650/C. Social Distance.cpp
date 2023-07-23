#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,k;
        cin>>n>>k;
        char a[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }
        for(int i=0; i<n; i++)
        {
            if(a[i] == '1')
            {
                int tiP = i;
                int tiN = i;
                int tk = k;
                while(tk--)
                {
                    a[--tiN] = '2';
                    a[++tiP] = '2';
                }
//
//
//        if(i!=0)
//            for(int l = i-k;l<i-1;l++)
//                a[l] = '2';
//        if(i!=n-1)
//            for(int l = i;l<(k+i);l++)
//                a[l] = '2';
            }
        }

        for(int i=0; i<n; i++)
            cout<<a[i];

        cout<<endl;
    }

}

