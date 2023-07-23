#include<bits/stdc++.h>
using namespace std;
vector<char> lcs;
int maxLCS(int a,int b)
{
    return a > b? a:b;
}
int LCS(string x,string y, int m,int n)
{
    int L[m+1][n+1];
    int i,j;

    for(int i = 0;i <= m ; i++)
    {
        for(int j = 0 ; j <= n ; j++)
        {
            if( i == 0 || j == 0)
                L[i][j] = 0;
            else if( x[i - 1] == y[j - 1])
            {
                cout<<x[i-1];
                L[i][j] = L[i-1][j-1] + 1;
            }
            else
            L[i][j] = maxLCS(L[i - 1][j],L[i][j-1]);
        }
    }
    cout << endl;
    return L[m][n];
}
int main()
{
    string x = "ABCBDA";
    string y = "BDCABA";
//
//    int m = sizeof(x)/sizeof(x[0]);
//    int n = sizeof(y)/sizeof(y[0]);

    int m = x.length();
    int n = y.length();

//    cout<<m<<n;

    cout<<endl<<LCS(x,y,m,n);

}

