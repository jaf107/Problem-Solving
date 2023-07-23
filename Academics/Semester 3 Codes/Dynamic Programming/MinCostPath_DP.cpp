#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 3
int min(int x,int y, int z)
{
    return min(min(x,y),z);
}
int minCost(int cost[R][C], int m, int n)
{
    int tc[R][C];
    tc[0][0] = cost[0][0];

    //Initialize first column of total cost(tc) array
    for(int i = 1 ; i<=m;i++)
        tc[i][0] = tc[i - 1][0] + cost[i][0];

    //Initialize first row of total cost(tc) array
    for(int i = 1 ; i<=n;i++)
        tc[0][i] = tc[0][i - 1] + cost[0][i];

    for(int i = 1; i<=m ; i++)
    {
        for(int j = 1 ; j<=n; j++)
        {
            tc[i][j] = min(tc[i-1][j-1],tc[i-1][j],tc[i][j-1]) + cost[i][j];

        }
    }
    return tc[m][n];
}
int main()
{
    int cost[3][3] =   {{1,2,3},
                        {6,8,2},
                        {1,5,3}};
    cout<<minCost(cost,1,2);
    return 0;

}

