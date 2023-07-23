#include<bits/stdc++.h>
using namespace std;
int HCF(int a, int b)
{
    while(b)
    {
        a %= b;
        swap(a,b);

    }
    return a;
}
int lcm(int a, int b)
{

    return a*b/ HCF(a,b);
}
int main()
{
    cout<<lcm(30,20);

}
