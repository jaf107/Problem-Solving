#include<bits/stdc++.h>
using namespace std;
int gcdRecursion(int a, int b)
{
    if(b == 0)
        return a;
    return gcdRecursion(b,a%b);
}
int gcd(int a, int b)
{
    while(b)
    {
        a = a % b;
        swap(a,b);
    }
    return a;
}
int main()
{
    cout<<gcdRecursion(30,45)<<endl;
    cout<<gcd(58,113);
}
