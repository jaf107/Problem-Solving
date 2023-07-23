
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;

bool isValid(string s)
{
    stack<char> inputStack;

    for( int i = 0 ; i < s.size();  i++)
    {


        char c = s[i];
        if(c == '(' || c == '{' || c == '[')
            inputStack.push(c);
        else{
            if(inputStack.empty()){
                return false;
            }
            if(s[i] == ')' && inputStack.top() != '(')
            {
                return false;
            }
            if(s[i] == '}' && inputStack.top() != '{')
            {
                return false;
            }
            if(s[i] == ']' && inputStack.top() != '[')
            {
                return false;
            }
            inputStack.pop();
        }


    }
    if(!inputStack.empty())
        return false;
    return true;
}
int main()
{
    cout << isValid("[{}]");
         return 0;
}
