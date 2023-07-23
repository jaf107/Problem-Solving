#include<bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    for(int i = 2 ; i<=sqrt(n) ; i++)
    {
        if(n % i == 0)
            return 2;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;

    if(n > 2)
        cout<<2<<endl;
    else
        cout<<1<<endl;
    int col[n];

    for(int i =0 ; i< n;i++)
        col[i] = isPrime(i+2);

    for(int i =0 ; i< n;i++)
    cout<<col[i]<<" ";
}
