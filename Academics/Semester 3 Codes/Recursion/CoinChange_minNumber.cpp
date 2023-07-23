#include<bits/stdc++.h>
using namespace std;
int minCoins(int coins[], int m, int n)
{
    if( n == 0)
        return 0;
    int res = INT_MAX;

    for(int i = 0 ; i<m ; i++)
    {
        if(coins[i] <= n)
        {
            int sub_res = minCoins(coins, m , n-coins[i]);

            if(sub_res != INT_MAX && sub_res + 1 < res)
                res = sub_res + 1;

        }
    }
    return res;
}
int main()
{
    int s[] = {9,6,5,1};
//    int s[] = {1,2,3};
    int m = sizeof(s)/sizeof(s[0]);

    int v = 11;
    cout<<minCoins(s,m,v);
    return 0;
}

