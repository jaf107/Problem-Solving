#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000

//Common memset settings
//memset(memo, -1 , sizeof memo);   //intialize DP memoization with -1
//memset(arr, 0, sizeof arr);       //to clear arrray of integers

//SHORTCUTS
// trueCase =  a ? b:c // if(a) trueCase = b; else ans = c;
// and

int main()
{
    string input, outputS = "";
    cin >> input;

    vector<char> output;

    for(int i = 0; i < input.size(); i++)
    {
        if(output.size() == 0 || output.end() != (char)input[i]){
//            output += input[i];
            output.push_back(input[i]);
        }else{
            output.pop_back() ;
        }
    }

    cout << output;

}
