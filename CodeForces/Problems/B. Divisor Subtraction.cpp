#include <stdio.h>
int prime(int n)
{
    long i,flag;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 1;
    else
        return 0;
}

int main ()
{
    long n,x,d,count=0,p;
    scanf("%li",&n);
    if(n%2==0)
        printf("%li",n/2);
    else
    {
        for(d=3; d<=n; d=d+2)
        {
            if(n%d==0)
            {
                x=prime(d);
                if(x==1)
                {
                    count++;
                    n=n-d;

                    if(n%2==0)
                    {
                        p=n/2;
                        printf("%li", count+p);
                        break;
                    }
                    else if(n==0)
                    {
                        printf("%li",count);
                        break;
                    }
                }
            }
        }
    }
}
