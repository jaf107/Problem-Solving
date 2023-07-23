#include<bits/stdc++.h>
using namespace std;

int recur(string s,char c)
{
    if(s.size() == 1)
    {
        if(s[0] == c)
            return 0;
        else
            return 1;
    }

    int n = s.size();

    int mid = n/2;

    int firstHalf = 0 , secondHalf = 0;
    for(int i = 0 ; i< mid; i++)
    {
        if(s[i] != c)
            firstHalf++;
    }
    for(int i = mid; i<n ; i++)
    {
        if(s[i] != c)
            secondHalf++;
    }
    string b = s.substr(0,mid);
    string d = s.substr(mid,n);

    return min(firstHalf + recur(d,c+1),secondHalf + recur(b,c+1));
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<recur(s,'a')<<endl;
    }
    return 0;
}

