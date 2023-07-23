
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;

string cleanString(string s)
{
    string ans = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] > 64 && s[i] < 91)
            ans += tolower(s[i]);
        else if(96 < s[i] && s[i] < 123)
            ans += s[i];
        else if(47 < s[i] && s[i] < 58)
            ans += s[i];
        else{

        }
    }

    return ans;
}
bool isPalindrome(string s)
{
    string cleanStr= cleanString(s);

    int left = 0, right = cleanStr.size() - 1;

    for(; left < right; left++,right--)
    {
//        cout << cleanStr[left] << " " << cleanStr[right] << endl;
        if(cleanStr[left] != cleanStr[right])
            return false;
    }
    return true;
}
int main()
{
    string s = " ";
    cout << isPalindrome(s);

    return 0;
}
