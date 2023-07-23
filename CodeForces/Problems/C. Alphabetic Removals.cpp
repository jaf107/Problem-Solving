#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,counter = 0;

    cin>>n>>k;
    char s[n];
    cin>>s;
    for(char c='a';c<='z';c++)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i] == c)
            {
                counter++;
                s[i]= ' ';
                if(counter == k)
                    break;
            }

        }
        if(counter == k)
            break;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]!=' ')
            printf("%c",s[i]);
    }
    return 0;

}
