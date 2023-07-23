
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h[2], m[2];

    scanf("%d:%d",&h[0], &m[0]);
    scanf("%d:%d",&h[1], &m[1]);

    h[0] -= h[1];
    m[0] -= m[1];

    if(m[0] < 0)
    {
        m[0] += 60;
        h[0]--;
    }
    if(h[0] < 0)
        h[0] += 24;

    printf("%02d:%02d\n", h[0], m[0]);
    return 0;
}
