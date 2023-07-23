#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0 ; i<n ; i++ ){
        cin>>a[i];
    }
    sort(a,a+n);

    long long int fans = 0,sans = 0,i =0;
    for(; i < n/2 ; i++){
        fans += a[i];
    }
    for(;i<n;i++){
        sans += a[i];
    }

    cout<<(fans * fans) + (sans *sans);
}
