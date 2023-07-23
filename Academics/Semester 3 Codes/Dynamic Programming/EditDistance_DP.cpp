#include<bits/stdc++.h>
using namespace std;
int min(int x,int y,int z)
{
    return min(min(x,y),z);
}
int editDistDP(string x,string y, int m, int n)
{
    int dp[m+1][n+1];

    for(int i = 0 ; i <= m; i++)
    {
        for(int j = 0; j <= n ; j++)
        {
            if( i == 0)
                dp[0][j] = j; // Min Operations = j
            else if( j == 0)
                dp[i][0] = i;
            else if(x [ i - 1 ] == y [ j - 1 ])
                dp[i][j] = dp[i - 1][j-1];
            else
                dp[i][j] = 1 + min(dp[i][ j - 1],    // Insert
                                   dp[i - 1][j],    // Remove
                                   dp[i-1][j-1]);  // Replace

        }
    }
    return dp[m][n];
}
int main()
{
    string str1 = "sunday";
    string str2 = "saturday";

    cout<<editDistDP(str1 , str2 , str1.length() , str2.length());

    return 0;
}

