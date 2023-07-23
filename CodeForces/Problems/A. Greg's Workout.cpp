#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,backs=0,chest=0,biceps=0;
    cin>>n;
    int ex[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];

    for(int i=0;i<n;i+=3)
    {
        backs += ex[i+2];
        chest += ex[i];
        biceps += ex[i+1];
    }
    if((backs >= chest ) && (backs >= biceps))
        cout<<"backs";
    else if((chest >= backs) && (chest > biceps))
        cout<<"chest";
    else if((biceps >= backs) && (biceps > chest))
        cout<<"biceps";
    else



    return 0;
}
