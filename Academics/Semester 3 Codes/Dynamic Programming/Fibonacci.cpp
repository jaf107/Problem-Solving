#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;

    for(int i=2 ; i <= n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(int i = 0; i <= n; i++)
        cout<<fib[i]<<" ";
    cout<<endl;
    return fib[n];
}
int main()
{
    int n;
    cin>>n;

    cout<<"The "<<n<< " number in the fibonacci series is :"<<fibonacci(n);
}
