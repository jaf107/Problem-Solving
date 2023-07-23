#include<bits/stdc++.h>
using namespace std;
vector<char> lcs;
int maxLCS(int a,int b)
{
    return a > b? a:b;
}
int LCS(string x,string y, int m,int n)
{
    if(m == 0 || n == 0)
        return 0;
    if(x[m-1] == y[n-1])
    {
//        cout<<x[m-1]<<" ";
        return 1 + LCS(x,y,m-1,n-1);
    }
    if(x[m-1] != y[n-1])
    {
        return maxLCS(LCS(x,y,m-1,n), LCS(x,y,m,n-1));
    }
    return 0;
}
int main()
{
    string x = "ABCDGH";
    string y = "AEDFHR";
//
//    int m = sizeof(x)/sizeof(x[0]);
//    int n = sizeof(y)/sizeof(y[0]);

    int m = x.length();
    int n = y.length();

//    cout<<m<<n;

    cout<<LCS(x,y,m,n);

}
