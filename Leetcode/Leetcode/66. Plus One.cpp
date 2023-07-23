
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;

int exponent(int base, int power)
{
    if (power == 0)
        return 1;
    int value = base;
    power--;
    while(power)
    {
        value *= base;
        power--;
    }
    return value;
}

int constructNum(vector<int> digits, int s)
{
    int n = 0;
    for(int i = s-1,r=0; i > -1 ; i--, r++ )
    {
        int value = exponent(10,r);
        value *= digits[i];
        n += value;

//        cout << "Value \t " << value << endl;
//        cout << "N: \t " << n<< endl;
    }

    return n;
}
vector<int> plusOneV1(vector<int>& digits)
{

    int n = constructNum(digits, digits.size());
    n++;

    stack<int> temp;
    vector<int> ans;
    while(n)
    {
        int last = n%10;
        n /= 10;
        temp.push(last);
    }

    while(!temp.empty())
    {
        ans.push_back(temp.top());
        temp.pop();
    }

    return ans;
}

vector<int> plusOne(vector<int>& digits)
{
    int s = digits.size();
    int last = digits[s-1];
//    digits[s-1]++;

    int c = 1;
    for(int i = s-1; i > -1; i--)
    {
        int &digit = digits[i];
        digit += c;
        if(digit == 10)
        {
            digit = 0;
            c = 1;
        }else c = 0;
    }

    if(c == 1)
        digits.insert(digits.begin(), 1 );

    return digits;

}

int main()
{
    vector<int> a = {9};
    vector<int> ans = plusOne(a);

    for(int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << " ";
    }

    return 0;
}
