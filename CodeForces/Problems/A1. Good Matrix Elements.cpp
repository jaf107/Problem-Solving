#include<bits/stdc++.h>
using namespace std;
    int mat[101][101];
    bool vis[101][101];
    int n,ans;

void mainDiagonal()
{
    for(int i = 0; i < n; i++)
    {
        if(vis[i][i])
            continue;
        ans += mat[i][i];
        vis[i][i] = true;
    }
}

void seconDiagonal()
{
    f

}

int main()
{
    ans=0;
    cin>>n;



    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            vis[i][j] = false;
        }
    }

    mainDiagonal();
    seconDiagonal();
    middleRow();
    middleCol();





    return 0;
}
