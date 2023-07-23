#include<bits/stdc++.h>
using namespace std;
int min(int x,int y, int z)
{
    return min(min(x,y),z);
}
int minCost(int cost[3][3], int x, int y)
{
    if(y< 0 || x< 0)
        return INT_MAX;
    else if(x == 0 && y==0)
        return cost[x][y];
    else
        return cost[x][y] + min(minCost(cost,x-1,y),minCost(cost,x,y-1),minCost(cost,x-1,y-1));

}
int main()
{
    int cost[3][3] =   {{1,2,3},
                        {6,8,2},
                        {1,5,3}};
    cout<<minCost(cost,2,1);
    return 0;

}
