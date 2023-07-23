#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        long long n,k,c=0;
        cin>>n>>k;

        while( n != 0)
        {
            if(n%k == 0)
                n/=k;
            else
            {
                c += n%k;
                n -= n%k;
                continue;
            }
                c++;
        }
        cout<<c<<endl;
    }

}
