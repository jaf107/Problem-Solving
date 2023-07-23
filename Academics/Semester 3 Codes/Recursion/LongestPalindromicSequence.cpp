#include<bits/stdc++.h>
using namespace std;
int lps(string s,int i, int j)
{
    if(i == j)
        return 1;

    if(s[i] == s[j] && i + 1 == j)
    {
//        cout<<s[i]<<" ";
        return 2;
    }
    if(s[i] == s[j])
    {
//        cout<<s[i]<<" ";
        return lps(s, i+1, j-1) + 2;
    }
    return max(lps(s,i+1,j),lps(s,i,j-1));
}
int main()
{
    string s = "GEEKSFORGEEKS";

    cout<<"Length of LPS is "<<lps(s,0,s.length()-1);
    return 0;
}
