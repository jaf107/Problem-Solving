#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        if(a[a.length()-1] == 'o')
            cout<<"FILIPINO"<<endl;
        else if(a[a.length()-1] == 'u')
            cout<<"JAPANESE"<<endl;
        else if(a[a.length()-1] == 'a')
            cout<<"KOREAN"<<endl;

    }

    return 0;
}
