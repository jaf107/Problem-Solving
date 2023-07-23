#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,l,s;

    while(cin>>m>>n)
    {
        l= max(m,n);
        s= min(m,n);
        cout<<(((l - 1)*s) + (s - 1))<<endl;
    }
    return 0;
}
