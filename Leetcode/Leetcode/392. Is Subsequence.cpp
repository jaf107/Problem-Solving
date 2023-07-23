
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;

bool isSubsequence(string s, string t) {
    int n = t.size();

    int sI = 0;
    for(int i = 0; i < n; i++){
        if(s[sI] ==  t[i]){
            sI++;
//            cout << t[i] << " " << i << endl;
        }
    }
//    cout << sI << endl;
    if(sI == s.size())
        return true;
    return false;
}
int main()
{
    string s = "abc";
    string t = "ahbgdc";
    cout << isSubsequence(s, t);
    return 0;
}
