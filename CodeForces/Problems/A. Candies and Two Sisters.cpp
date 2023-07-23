#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if( n == 1 || n==2)
            cout<<0;
        else if( n%2 == 0)
            cout<< (n/2) -1;
        else
            cout<< n/2;

        cout<<endl;

    }
    return 0;
}
