#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    int g=0,tempSize[n]={0},noOfGroups=0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == 'B')
        {
            while(a[i] == 'B')
            {
                tempSize[g]++;
                i++;
            }
            g++;
            noOfGroups++;

        }
    }
    cout<<noOfGroups<<endl;
    for(int i=0;i<noOfGroups;i++)
        cout<<tempSize[i]<<endl;

}
