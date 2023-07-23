#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ta,tb,dif = 0,pos = 0,win = 0;
    cin>>n;

//    int a[n],b[n];
    int a=0,b=0;
    while(n--)
    {
        cin>>ta>>tb;
        a+=ta;
        b+=tb;
        int d = a-b;
        if(abs(d) > dif)
        {
            dif = abs(d);
            if(d>0)
                win = 1;
            else
                win = 2;
        }


    }
//    cout<<"Winner is :"<<win<<"\nDifference is :"<<dif;
    cout<<win << " "<< dif;
}
