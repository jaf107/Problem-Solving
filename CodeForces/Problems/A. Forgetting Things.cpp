#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<a<<1<<" "<<b<<2;
    }
    else if((a+1)== b)
    {
        cout<<a<<9<<" "<<b<<0;
    }
    else if((a==9) && b==1)
    {
        cout<<9<<" "<<10;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
