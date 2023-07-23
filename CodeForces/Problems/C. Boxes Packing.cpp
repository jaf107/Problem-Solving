#include<bits/stdc++.h>
#define pushb push_back;
#define popb pop_back ;


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
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
        cin >> a[i];

    int output[n];

    memset(output,1, sizeof(output));

    sort(a, a+n);
    int c = 0;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] < a[j])
            {
                output[i] = 0;
                break;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        if(output[i])
            c++;

    }

    cout << c;
}

