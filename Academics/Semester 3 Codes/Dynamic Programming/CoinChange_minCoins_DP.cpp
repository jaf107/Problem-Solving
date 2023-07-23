#include<bits/stdc++.h>
using namespace std;
int minCoins(int coins[], int m, int n)
{
    int table[n+1];

    table[0] = 0;

    for(int i = 1 ; i<= n ;i++)
        table[i] = INT_MAX;

    for(int i = 1; i<= n; i++)
    {
        for(int j = 0; j< m ;j++)
        {
            if(coins[j] <= i)
            {
                int sub_res = table[i - coins[j]];
                if(sub_res != INT_MAX && sub_res + 1 < table[i])
                    table[i] = sub_res + 1;
            }
        }
    }
//    for(int i = 0 ; i <= n ; i++)
//        cout<<table[i] << " ";
    cout<<endl;
    return table[n];
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


