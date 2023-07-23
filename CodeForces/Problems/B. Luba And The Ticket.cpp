#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;

    int first3  = a[0] + a[1] + a[2] - 144;
    int last3   = a[3] + a[4] + a[5] - 144;

    int d = abs(first3 - last3);
    if(d == 0)
        cout<<0;
    else if(d<9)
        cout<<1;
    else if (d<18)
        cout<<2;
    else
        cout<<3;
}
