#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l = s.length();
    //char ans[l];
    priority_queue <char> sample;
    for(int i=0;i<=l;i++)
    {
        if(s[i]>='0' && s[i]<='9')
            sample.push(s[i]);
    }
    int sizeS = sample.size();
    char ans[sizeS];
   // cout<<"Size :"<<sizeS<<endl;
    int i=0;
    while(!sample.empty())
    {
        ans[i++] = sample.top();
        //cout<<sample.top()<<endl;
        sample.pop();
    }
    cout<<ans[sizeS - 1];
    for(i=sizeS-2;i>-1;i--)
        cout<<"+"<<ans[i];

   // cout<<ans[i];

}
