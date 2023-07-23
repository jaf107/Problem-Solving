#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;
string subString(string s, int startIndex,int endIndex)
{
// cout<<"S: "<<s<<endl;
string sub="";
for(int i=startIndex;i<=endIndex;i++){
sub=sub+s[i];
}
//cout<<"Sub: "<<sub<<endl;
return sub;
}


string longestCommonPrefix(vector<string>& strs)
{
    /*
        string common = "";
        int minL = INT_MAX;
        for(int i = 0; i < strs.size(); i++)
        {
            int s = strs[i].size();
            minL = min(s,minL);
        }
    //    cout << strs[0][0];
        int posC = 0;
        bool noMore = false;
        for(int i=0; i<minL; i++)
        {
            char c = strs[i][posC];
    //        cout << c << endl;
            for(int j = 0; j < strs.size(); j++)
            {
                if(c != strs[j][i] ){
                    noMore = true;
                }
            }
            if(noMore)
                break;
            posC++;

        }
        common = strs[0].substr(0,posC);
        return common;
        */
        if(strs.size()==1){
            return strs[0];
        }

    int minSize=strs[0].size();
    // cout<<"MinSize: "<<minSize<<endl;
    string preFix,preFix1;
    int count=0;
    for(int i=1; i<strs.size(); i++)
    {
        if(minSize>strs[i].size())
        {
            minSize=strs[i].size();
        }
    }
//     cout<<"MinSize: "<<minSize<<endl;
    for(int i=minSize-1; i>=0; i--)
    {
        preFix=subString(strs[0],0,i);
//         cout<<"Matching Prefix: "<<preFix<<endl;
        for(int j=0; j<strs.size(); j++)
        {
            preFix1=subString(strs[j],0,i);
            if(preFix==preFix1)
            {
                count++;
            }

        }
//         cout<<"Count: "<<count<<endl;
        if(count==strs.size())
        {
//             cout<<"Matching: "<<preFix<<endl;
            break;
        }
        else
        {
            preFix="";
            count=0;
        }
    }
    return preFix;

}
int main()
{
    vector<string> strs = {"a","ab"};
    cout << longestCommonPrefix(strs);
    return 0;
}
