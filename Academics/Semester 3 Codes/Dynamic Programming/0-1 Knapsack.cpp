#include<bits/stdc++.h>
using namespace std;
#define R 20
void printf2DArray(int a[R][R],int r,int c)
{
    for(int i = 0; i<r; i++)
    {
        for(int j = 0 ; j< c ; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int knapsack(int target, int wt[], int val[],int n)
{
    int p[n+1][target+1];
    for(int i = 0; i<=n ;i++)
    {
        for(int j = 0; j<= target ; j++)
        {
            if(i == 0 || j == 0)
                p[i][j] = 0;
            else if( wt[i-1] <= j)
            {
                p[i][j] = max(val[i-1] + p[i-1][j - wt[i-1]],
                               p[i-1][j]);
            }
            else
            {
                p[i][j] = p[i-1][j];
            }
        }

    }
//    printf2DArray(p,n+1,target+1);

    int r = n+1, c = target+1;

    for(int i = 0; i<r; i++)
    {
        for(int j = 0 ; j< c ; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    return p[n][target];
}

int main()
{
    int wt[] = {2,1,3,2};
    int val[] = {12,10,20,15};

    int n = sizeof(wt)/sizeof(wt[0]);

    int target;
    target = 5;
    cout<<knapsack(target,wt,val,n);

}
