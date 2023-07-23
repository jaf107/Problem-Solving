#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a!=b)
        {
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
}
