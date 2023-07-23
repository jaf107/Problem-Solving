#include<bits/stdc++.h>
using namespace std;
//int steps;
int collatz(int n)
{
    steps++;
    if(n==1 || n==0)
    {
        cout<<1<<endl;

        return 0;
    }
    else if(n%2 == 0)
    {
        cout<<n<<"->";
        return 1+collatz(n/2);
    }
    else
    {
        cout<<n<<"->";
        return 1+collatz((3*n)+1);

    }

}
int main()
{
    while(1)
    {
        steps = 0;
        int n;
        cin>>n;
        cout<<collatz(n);
        cout<<"Steps number is :"<<steps<<endl;
    }
    //cout<<"Collatz value is "<<collatz(n);
}
