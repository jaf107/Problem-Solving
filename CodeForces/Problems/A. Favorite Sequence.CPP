#include<bits/stdc++.h>
using namespace std;

void oddPrint(int count, int a[]){
    for (int i = 0; i < count; i+=2)
    {
        cout<<a[i]<<" ";
    }
}

void evenPrint(int length, int a[]){
    if(length%2)
        length--; 
    for (int i = length - 1; i >= 0; i-=2)
    {
        cout<<a[i]<<" ";
    }

}
int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for (int  i = 0; i < n; i++)
        {
            cin>>a[i]   ;
        }
        oddPrint(n,a);
        evenPrint(n,a);

    }
    return 0;
}
