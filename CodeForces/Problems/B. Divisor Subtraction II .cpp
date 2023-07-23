#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    for(int i = 2 ; (i*i) <= n;i++)
    {
        if( n % i == 0)
            return false;
    }
    return true;

}

int main ()
{

    long long n;
    cin>>n;
    for(int i= 2 ; i<= n;i++)
    {
        if(prime(i))
        {
            if(n % i == 0)
            {
                cout<<n/i<<endl;
                break;
            }
        }
    }
    return 0;
}

