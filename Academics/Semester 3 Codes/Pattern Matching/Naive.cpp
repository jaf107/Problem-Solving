#include<bits/stdc++.h>
using namespace std;
int n,m;
bool patternFinder(string text, string pattern)
{
    bool ans = false;
    for(int i=0; i< n;i++)
    {
        bool c= true;

        for(int j = i,k=0; k<m; + j++,k++)
        {
            if(!c)
                break;
            if(text[j] != pattern[k])
            {
                c = false;
            }
        }

        if(c)
        {
            cout<<"Pattern matches at "<<i<<endl;
        }

    }

}
int main()
{
//    string text = "Geeks for Geeks";
//    string pattern ="Geek";

    string text = "AABAACAADAABAAABAA";
    string pattern = "AABA";

    n = text.length();
    m = pattern.length();

    patternFinder(text, pattern);
}

