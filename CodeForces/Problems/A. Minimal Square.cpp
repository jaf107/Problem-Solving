#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    scanf("%d",&cases);
    while(cases--)
    {
        int a,b;
        cin>>a>>b;

        cout<< pow(min(max(2*a,b), max(2*b,a)),2)<<endl;
    }
    return 0;
}
