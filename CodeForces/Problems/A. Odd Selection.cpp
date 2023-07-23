#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,odd=0,even=0;
        cin>>n>>x;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2 == 0)
                even++;
            else
                odd++;
        }


        bool ok = false;

        for(int i = 1; i <= odd and i <= x; i+=2 )
        {
            if(x - i <= even){
                ok = true;
                break;
            }
        }

        cout << (ok ? "Yes": "No") << endl;


    }
}
