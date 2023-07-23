#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;

bool isInterleave(string s1, string s2, string s3)
{
    int s1i = 0, s2i = 0;
    int n = s3.size();
    for(int i = 0 ; i < n; i++){
            cout <<"\n" <<s3[i] << i << " \n";

            cout << s1[s1i] << s1i << " \n";
            cout << s2[s2i] << s2i << " \n";
        if(s1[s1i] == s3[i]){
            s1i++;
        }else if(s2[s2i] == s3[i]){
            s2i++;
        }else {
            cout << "mismatch\n\n";
//            cout << s3[i] << i << " \n";
//            cout << s1[s1i] << s1i << " \n";
//            cout << s2[s2i] << s2i << " \n";
//            return false;
        }
    }
    return true;
}
int main()
{
    string s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc";
    cout << isInterleave(s1,s2,s3);
    return 0;
}
