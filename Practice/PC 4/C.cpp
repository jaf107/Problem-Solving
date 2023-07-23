

#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a; a < b; i++)
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;
using namespace std;
void solve();
double pi = 2 * acos(0.0);

int main()
{
    Faster;


//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("error.txt", "w", stderr);
//    freopen("output.txt", "w", stdout);
//#endif


    ll t=1; /// If there is no multiquery
//    cin>>t; /// then comment this


    while(t--)
    {
//        cout << pi;
        solve();
        cout<<"\n";

    }

    return 0;
}

void printMap(map<ll,ll> m, string name)
{
    cout << name << " : \n";
    for(auto x: m)
    {
        cout << " " << x.first << " " <<  x.second << endl;
    }
    cout << endl;

}

void printVector(vector<ll> a, string name)
{
    cout << name << " : ";
    for(auto x: a)
    {
        cout << x << " ";
    }
    cout << endl;
}

void solve()
{
    /// Input the number of element
    ll n;
    cin >> n;

    vector<string> inputStrings(n);

    string finalString = "";
    for(int i = 0; i < n; i++)
    {
        cin >> inputStrings[i];
//        finalString += inputStrings[i];
//        finalString += " ";
    }

    for(int i = 0; i < n-1; i++)
    {
        finalString += inputStrings[i];
        finalString += " ";
    }
    finalString += inputStrings[n-1];

    ll finalStringSize = finalString.size();
    ll finalStringIterator = 0;

    bool isCapsOn = false;

    ll keycount;
    cin >> keycount;

    string typedString = "";
    ll typedStringIterator = 0;
    while(keycount--)
    {
        string s;
        cin >> s;

        if(s == "Space")
        {
            typedString += " ";
            continue;
        }

        if(s == "CapsLock")
        {
            isCapsOn = !isCapsOn;
            continue;
        }

        if(s == "Backspace")
        {
            typedString = typedString.substr(0,typedString.size()-1);

            continue;
        }

        string stringToAppend = s;
        if(isCapsOn)
        {
            transform(s.begin(), s.end(), s.begin(), ::toupper);
        }else
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
        }
        typedString += s;
    }

    if((finalString) != typedString)
        cout << "Incorrect";
    else
        cout << "Correct";
//    cout << typedString << endl;
//    cout << finalString;




}
