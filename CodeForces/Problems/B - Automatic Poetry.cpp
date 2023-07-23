#include<bits/stdc++.h>
using namespace std;
string bracketRemover(string l)
{

	std::string s = l;
	std::string char1 = "<";
	std::string char2 = ">";

	for (char c: char1) {
		s.erase(std::remove(s.begin(), s.end(), c), s.end());
	}
	for (char c: char2) {
		s.erase(std::remove(s.begin(), s.end(), c), s.end());
	}

	std::cout << s;

	return s;
}

int main()
{
    int n;
    string l1,l2,c1,c2,w1,w2;
    cin>>n;
    while(n--)
    {
        cin>>w1;
        l1=w1;
        while(w1!="\n")
        {
            l1+=" ";
            cin>>w1;
            l1+=w1;
        }
        cin>>w2;
        l2=w2;
        while(w2!="\n")
        {
            l2+=" ";
            cin>>w2;
            l2+=w2;
        }

        c1=bracketRemover(l1);
        c2=l2;
        cout<<l1<<endl<<l2<<endl;
    }

    return 0;
}

