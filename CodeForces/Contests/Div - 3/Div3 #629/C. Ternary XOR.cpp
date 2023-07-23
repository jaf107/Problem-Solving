#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    long n,i;
    char x[60000],a[60000],b[60000];
    scanf("%d",&t);
    while(t--)
    {
        cin>>n;
        cin>>x;
        for(i=0;i<n;i++)
        {
            if(x[i]=='0') {
                a[i]='0';
                b[i]='0';
            }
          else  if(x[i]=='1'){
                a[i]='1';
                b[i]='0';
            }
           else if(x[i]=='2')
            {
                a[i]='1';
                b[i]='1';
            }

        }

              printf("%s\n",a);
            printf("%s\n",b);



    }
    return 0;

}
