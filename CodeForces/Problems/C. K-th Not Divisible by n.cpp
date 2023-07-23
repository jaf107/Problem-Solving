#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n,k,i=1,num=1;
        cin>>n>>k;

        long long need = (k-1)/(n-1);

        cout << k + need << endl;
    }

    return 0;
}
