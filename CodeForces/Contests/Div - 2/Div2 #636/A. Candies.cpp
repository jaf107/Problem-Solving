#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,deno,k;
        cin>>n;
        for(k=2;; k++)
        {
            deno = (pow(2,k) - 1);
            if(n%deno == 0)
                break;
        }
        cout<<n/deno<<endl;
    }
    return 0;
}

