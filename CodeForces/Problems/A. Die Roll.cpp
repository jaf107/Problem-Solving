#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;

    int num = 0, den = 6;

    int m = max(y,w);

    num = 6 - m + 1;

    int hcf = __gcd(num, den);
    num /= hcf;
    den /= hcf;

    printf("%d/%d",num, den);
}
