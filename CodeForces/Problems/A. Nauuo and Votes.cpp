#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,Min,Max;
    cin>>x>>y>>z;

    Min = min(x,y);
    Max = max(x,y);

    if(z>=(abs(Min-Max)) && z!=0)
        cout<<"?";
    else if(y>x)
        cout<<"-";
    else if(x>y)
        cout<<"+";
    else
        cout<<"0";
    return 0;
}
