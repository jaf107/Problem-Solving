#include<bits/stdc++.h>
using namespace std;
   string f(string str, int pos){
  if(pos == str.size()) return "";
  string ret = f(str , pos+1);
//  append character str[pos] to end ret
  return ret;
}
int main()
{


    cout<<f("keshav", 0);
    return 0;
}
