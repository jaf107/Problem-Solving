#include<bits/stdc++.h>
using namespace std;
int t;
int fib(int n)
{
    t++;
   // cout<<n<<" + ";
    if(n<=1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}
int main()
{
    t=0;

        int n;
        cin>>n;
        cout<<"\nFibonacci of "<<n <<" is : "<< fib(n)<<endl;
        cout<<"\nTime is :"<<t<<endl;

}
