#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int sqrtN = int(sqrt((double) n));
    for(int i = 3 ; i<= sqrtN ; i+=2){

        if( n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    n = 145;
    cout<<"2 ";
    for(int i = 3 ; i<=n;i++){
        if(i%2 == 0)
            continue;
        if(isPrime(i))
            cout<<i<<" ";
    }
    return 0;
}
