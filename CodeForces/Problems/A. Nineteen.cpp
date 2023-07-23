#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int nn=0,ni=0,ne=0,nt=0;
    for(int i=0;i<n.length();i++)
    {
        if(n[i] == 'n')
            nn++;
        if(n[i] == 'i')
            ni++;
        if(n[i] == 'e')
            ne++;
        if(n[i] == 't')
            nt++;
    }
    nn/=3;
    ne/=3;
    cout<<nn<<endl;
    cout<<ne<<endl;
    cout<<ni<<endl;
    cout<<nt<<endl;
    int minNE = min(nn,ne);
    int minNEI = min(minNE,ni);

    int ans = min(minNEI,nt);
    cout<<ans;


    return 0;
}

