#include<bits/stdc++.h>
using namespace std;

int dialLen(string s)
{
    char first = 'a';

    int ans = 0;
    for(int i = 0; i < s.length(); i++)
    {
        int d = abs(s[i] - first);
        first = s[i];
        ans += min(d, 26 - d);
    }


    return ans;
}

int main()
{
    string s;
    cin >> s;

    cout << dialLen(s);
}
