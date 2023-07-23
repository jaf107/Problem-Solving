#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int box[n];
    for(int i=0;i<n;i++)
        cin>>box[i];
    int c,pos = 0,taken = 0;
    while(1)
    {
        cin>>c;
        if(c == 0)
            break;
        if(c == 1)
        {
            if(pos>0)
                pos--;
        }
        else if(c == 2)
        {
            if(pos<n-1)
                pos++;
        }
        else if(c==3)
        {

            if(taken!=1)
                if(box[pos]>0)
                {
                    box[pos]--;
                    taken = 1;
                }
        }
        else if(c == 4)
        {
            if(taken == 1)
                if(box[pos] < h)
                {
                    box[pos]++;
                    taken = 0;
                }
        }
//        cout<<"BOX : ";
//        for(int i=0;i<n;i++)
//            cout<<box[i]<<" ";
//        cout<<"\n";

    }
    for(int i=0;i<n;i++)
        cout<<box[i]<<" ";
}
