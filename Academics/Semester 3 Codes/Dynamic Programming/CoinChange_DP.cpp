// Problem to find number of different ways to find the change

#include<bits/stdc++.h>
using namespace std;
int countCoins(int s[], int m, int n)
{
    int i,j,x,y;
    int table[ n + 1][m];

    for( i = 0 ; i < m ; i++)
        table[0][i] = 1;

    for( i = 1; i <= n ; i++)
    {
        for( j = 0 ; j< m ; j++)
        {
            x = (i - s[j] >= 0) ? table[i - s[j]][j] : 0;

            y = (j >= 1) ?  table[i][j-1] : 0;

            table[i][j] = x + y;
        }
    }
    return table[n][m-1];

}
int main()
{
    int s[] = {9,6,5,2};
//    int s[] = {1,2,3};
    int m = sizeof(s)/sizeof(s[0]);

    cout<<countCoins(s,m,10);
    return 0;
}

