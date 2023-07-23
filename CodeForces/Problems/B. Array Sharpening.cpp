#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int> tab(n);
        for(int i = 0 ; i< n ; i++)
            cin>>tab[i];

        int prefixEnd = -1, suffixEnd = n;

        for(int i = 0; i< n ;i++)
        {
            if(tab[i] < i)
                break;
            prefixEnd = i;
        }
        for(int i = n - 1; i>=0 ; i--)
        {
            if(tab[i] < (n - 1) - i)
                break;
            suffixEnd = i;
        }

        if(suffixEnd <= prefixEnd)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}

