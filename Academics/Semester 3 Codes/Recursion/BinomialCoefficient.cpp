#include<bits/stdc++.h>
using namespace std;
int binomialCoefficient(int n,int r)
{
    if(r == 0 || n == r)
        return 1;

    return binomialCoefficient(n-1,r) + binomialCoefficient(n-1,r-1);
}
int main()
{
    while(1){
    int n = 0;
    int r = 0;
    cout<<"Enter the value of n and r (nCr) : ";
    cin>>n>>r;
    cout<<binomialCoefficient(n,r)<<endl;
    if(n == 0 && r == 0)
        break;
    }
}
