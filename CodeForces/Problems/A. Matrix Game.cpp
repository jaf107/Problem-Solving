#include<bits/stdc++.h>
using namespace std;
int main()
{
//    int t;
//    cin>>t;
//    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int mat[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>mat[i][j];
        }

        bool rowC = true, colC = true;
        int row = 0 , col = 0;
        for(int i=0;i<n;i++)
        {
            rowC = true;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j] == 1)
                    rowC = false;
            }
            if(!rowC)
                row++;
        }

        for(int i=0;i<m;i++)
        {
            colC = true;
            for(int j=0;j<n;j++)
            {
                if(mat[i][j] == 1)
                    colC = false;
            }
            if(!colC)
                col++;
        }
        cout<<"Col :" << col<<endl;
        cout<<"Row :" << row<<endl;
        int ans = min(col,row);

        if(ans % 2)
            cout<<"Ashish"<<endl;
        else
            cout<<"Vivek"<<endl;
    }
}
