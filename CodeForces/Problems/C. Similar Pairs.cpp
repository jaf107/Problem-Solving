#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    scanf("%d",&cases);
    while(cases--)
    {
        int n;
        cin>>n;
        int a[n];
        int e = 0, o = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] %2 == 0)
                e++;
            else
                o++;
        }
        sort(a,a+n);
        if( e % 2 == 0  && o % 2 == 0 )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int d ;
            bool ans  = false;
            for(int i=0;i<n;i++)
            {
                d = a[i+1] - a[i];
                if(d==1)
                {
                    ans  =  true;
                }
            }
            if(ans )
                cout<<"YES"<< endl;
            else
                cout<<"NO"<< endl;
        }
    }
    return 0;
}

