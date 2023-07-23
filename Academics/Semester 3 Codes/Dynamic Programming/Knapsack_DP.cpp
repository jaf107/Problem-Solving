#include<bits/stdc++.h>
using namespace std;
int knapsack(int W,int wt[],int val[], int n)
{
    int i, w;
    int K[n+1][W+1];

    for( i = 0; i<=n ; i++)
    {
        for( w = 0 ; w <= W ; w++)
        {
            if( i == 0 || w == 0)
                K[i][w] = 0;
            else if( wt[i-1] <= w)
                K[i][w] = max(val[i-1] + K[i-1][w- wt[i-1]],
                              K[i - 1][w]);
            else
                K[i][w] = K[i-1][w];
        }
    }

    int r = n+1, c = W+1;

    for(int i = 0; i<r; i++)
    {
        for(int j = 0 ; j< c ; j++)
        {
            cout<<K[i][j]<<" ";
        }
        cout<<endl;
    }
    return K[n][W];
}
int main()
{
//    int val[] = {60,100,120};
//    int wt[] = {10,20,30};

    int wt[] = {2,1,3,2};
    int val[] = {12,10,20,15};
    int W = 5;
    int n = sizeof(val)/ sizeof(val[0]);

    cout<<knapsack(W,wt,val,n);
    return 0;

}

