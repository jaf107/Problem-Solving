#include<bits/stdc++.h>
using namespace std;
int min(int x,int y,int z)
{
    return min(min(x,y),z);
}
int editDist(string x,string y, int m, int n)
{
    if(m == 0)
        return n;
    if(n == 0)
        return m;

    if(x[m-1] == y[n-1])
        return editDist(x,y,m-1,n-1);

    return 1 + min(editDist(x,y,m , n -1), // Insert
                 editDist(x,y,m - 1, n), // Remove
                 editDist(x,y,m - 1, n -1) ); // Replace

}
int main()
{
    string str1 = "sunday";
    string str2 = "saturday";

    cout<<editDist(str1 , str2 , str1.length() , str2.length());

    return 0;
}
