#include<bits/stdc++.h>
using namespace std;
string solve(string inp){
	stack<char> books;
	queue<char> temp;
//		stack<char> temp;

	string ans = "";
	for(int i =0; i < inp.size(); i++){
        char c = inp[i];
        if(c == '\\'){
//            cout << c;
            while(books.top() != '/'){
//                if(books.top() != '/')
                    temp.push(books.top());
                books.pop();
            }
            books.pop();
            while(!temp.empty()){
                books.push(temp.front());
//                books.push(temp.top());

                temp.pop();
            }
            continue;
        }
        books.push(c);
	}

	stack<char> rInp;
	while(!books.empty())
    {

        rInp.push(books.top());
        books.pop();
    }
    while(!rInp.empty())
    {
        ans += rInp.top();
//        cout << rInp.top();
//        rInp.push(books.top());
        rInp.pop();
    }
    return ans;
}
int main() {

	string inp;
	cin >> inp;
	cout << solve(inp);
}
