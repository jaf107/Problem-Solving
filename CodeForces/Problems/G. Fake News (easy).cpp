#include<bits/stdc++.h>
using namespace std;
int main()
{
    string h = "heidi";
    string s;
    cin>>s;
    int i,j=0;
    bool ans = false;
    int l = s.length();
    for(i=0; i<l; i++)
    {
        if(s[i] == h[j])
        {
            //cout<<s[i]<<" "<<j<<endl;
            if(j == 4)
            {
                ans = true;
                break;
            }
            j++;

        }

    }
    if(ans)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
