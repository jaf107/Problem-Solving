#include<bits/stdc++.h>
using namespace std;
int countCoins(int s[], int m, int n)
{
    if( n == 0 )
        return 1;
    if( n < 0 )
        return 0;

    if( m <= 0 && n>= 1)
        return 0;

    return countCoins(s, m -1 , n) + countCoins(s , m , n-s[m-1]);
}
int main()
{
//    int s[] = {9,6,5,1};
    int s[] = {1,2,3};
    int m = sizeof(s)/sizeof(s[0]);

    cout<<countCoins(s,m,4);
    return 0;
}
