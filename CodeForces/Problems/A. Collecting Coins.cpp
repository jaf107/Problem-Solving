#include<bits/stdc++.h>
using namespace std;
int maxFinder(int a,int b,int c)
{
    int maxA = a;
    if(maxA < b)
        maxA = b;
    if(maxA < c)
        maxA = c;

    return maxA;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,n;
        cin>>a>>b>>c>>n;
        long long int maxN = maxFinder(a,b,c);
        long long int d1,d2,d3;
        d1 = maxN - a;
        d2 = maxN - b;
        d3 = maxN - c;
        /*
        cout<<"\nd1-"<<d1<<endl;
        cout<<"d2-"<<d2<<endl;
        cout<<"d3-"<<d3<<endl<<endl;*/
        if((abs(n-(d1+d2+d3)))%3 == 0 && (n-(d1+d2+d3)>=0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
