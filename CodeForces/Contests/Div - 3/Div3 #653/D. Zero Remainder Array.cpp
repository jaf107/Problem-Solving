#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],dif[n] = {0};
        for(int i=0 ; i <  n ;i++)
        {
            cin>>a[i];
        }

        for(int i = 0;i<n;i++)
        {
            dif [i] = k- (a[i] % k);
            if(dif[i] % k ==0)
                dif[i] = 0;
//            remainder[k- (a[i] % k)]++;
        }
        sort(dif,dif+n);
        for(int i = 0;i< n;i++)
        {
            for(int j = i+1; j<n;j++)
            {
                if((dif[i] == dif[j]) && dif[i]!=0)
                    dif[j]+= k;
            }
        }

        if(dif[n-1])
            cout<<dif[n-1]+1<<endl;
        else
            cout<<0<<endl;

    }

}


