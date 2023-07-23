#include<bits/stdc++.h>
using namespace std;

int primeDivisor(int n)
{
    for(int i = 2 ; i<=sqrt(n) ;i++)
    {
        if(n % i == 0)
            return i;
    }
    return 1;

}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if(n % 2 == 0)
        {
            cout<<n/2 <<" "<<n/2<<endl;

        }
        else
        {
            int num = n/primeDivisor(n);
            cout<<num << " "<< n-num<<endl;

        }
    }
}

