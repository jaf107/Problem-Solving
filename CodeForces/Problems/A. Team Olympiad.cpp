#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n],noP=0,noM=0,noPE=0,x=0,y=0,z=0;
    int lP[n]= {0},lM[n]= {0},lPE[n]= {0};
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] == 1)
        {
            noP++;
            lP[x++] = i+1;

        }
        if(a[i] == 2)
        {
            noM++;
            lM[y++] = i+1;

        }
        if(a[i] == 3)
        {
            noPE++;
            lPE[z++] = i+1;
        }
    }
    noP = min(noP,noM);
    int teams = min(noP,noPE);
    cout<<teams<<endl;
    for(int i=0; i<teams; i++)
    {
        cout<<lP[i]<<" "<<lM[i]<<" "<<lPE[i]<<endl;
    }
    return 0;
}
