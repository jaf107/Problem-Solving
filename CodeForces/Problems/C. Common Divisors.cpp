#include<bits/stdc++.h>
using namespace std;
int minDiv(int a[],int n,int minN)
{
    g:
    for(int i=0 ; i<n;i++)
    {
        if(a[i] % minN != 0)
        {
            minN--;
            goto g;
        }


    }
    return minN;
}
int divisors(long long n)
{
    long long c = 0;
    for(long long  i=1;i*i <=n;i++)
    {
        if(n%i == 0)
        {
            c++;
            if(i !=  n/i)
                c++;
        }

    }
    return c;
}
int main()
{
    long long x, n,minN = 0;
    cin>>n;

    for(int i = 0 ; i< n; i++)
    {
        cin>>x;
        minN = __gcd(x,minN);
    }



    cout<<divisors(minN);


}
