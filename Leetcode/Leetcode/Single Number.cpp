#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;
int singleNumber(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++)
    {
        arr[i+1] = arr[i]^ arr[i+1];

    }
    return arr[n-1];
}

int main()
{
    vector<int> arr = {3,1,2,4,1,5,4,3,2};
    cout << singleNumber(arr);
    return 0;
}
