#include<bits/stdc++.h>
using namespace std;
int N = 135;
int status[5001];
//status[i] = 0 , if i is prime
//status[i] = 1 , if i isn't prime
int main()
{
    int i,j;
    for(int i = 2; i<= N; i++)
        status[i] = 0;

    for(int i = 2; i<= N; i++)
    {
        if(status[i] == 0)
        {
            for( j = 2*i ; j <= N ; j+= i)
            {
                status[j] = 1;
            }
        }
    }
    for( i = 2; i <= N; i++ )
    {
        if( status[i] == 0 )
        {
            // so, i is prime
            printf("%d ", i);
        }
    }
    return 0;
}

