#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int a[n],maxN = 0;
        for(int i = 0; i <n ;i++){
            cin>>a[i];
            maxN = max(maxN,a[i]);
        }

        if(maxN == 0)
        {
            char a = 'a';
            for(int i = 0;i<=n;i++)
                printf("%c\n",a+i);
            continue;
        }
        string s[n+1];
        char x='c';
        for(int i = 0 ; i<=n; i++)
        {
            s[i] = x;
            for(int j = 0;j<maxN;j++)
            {
                s[i] += (x);
            }
            x++;
        }

        for(int i =0; i<n ; i++)
        {
            int k = a[i];
            for(int j = 0;j<k;j++)
            {
                s[i][j] = 'a';
                s[i+1][j] = 'a';
            }

        }

        for(int i = 0;i<=n;i++)
            cout<<s[i]<<endl;
    }
}
