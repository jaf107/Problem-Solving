#include<bits/stdc++.h>
using namespace std;

int timeT ;
class numbers
{
public:
    int fib(int n)
    {
        int f[n+2];
        f[0] = 0;
        f[1] = 1;

        timeT = 2;
        for(int i=2; i<=n; i++)
        {
            timeT++;
            f[i] = f[i-1] + f[i-2];
        }
        return f[n];
    }
};
int main()
{

    numbers n;
    while(1)
    {
        timeT = 0;
        int t;
        cin>>t;

        cout<<"Fibonacci of "<<t<<" is : "<<n.fib(t)<<endl;

        cout<<"Time taken is :"<<timeT<<endl;
    }
}
