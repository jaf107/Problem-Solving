#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
   // for(int i=0; i<n; i++)
     //   cout<<a[i];
    int j = 0,longest=0,match=0;
    for(int i=0; i<n; i++)
    {
        j=i+1;


        if(a[i] == a[j])
        {
            match++;

            while(a[i] == a[j])
            {
                match++;
                j++;
                //cout<<"\n I is "<<i<<" J is "<<j<<endl;
            }
        }
        i = j-1;
        if(longest<match)
            longest = match;

        match = 0;
    }
    if((n-longest)<(longest-1))
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
