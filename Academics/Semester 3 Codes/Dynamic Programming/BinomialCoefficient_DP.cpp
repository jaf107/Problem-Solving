#include<bits/stdc++.h>
using namespace std;
int binomialCoefficient(int n,int r)
{
    int table[n+1][r+1];

    for(int i = 0; i <= n ;i++)
    {
        for(int j = 0; j<= min(i,r);j++)
        {
            if( j == 0 || j == i)
                table[i][j] = 1;
            else
            {
                table[i][j] = table[i-1][j] + table[i-1][j-1];
            }

        }
    }
    return table[n][r];
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

