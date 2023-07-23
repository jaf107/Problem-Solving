#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000

int main()
{
    int t;
    cin>>t;
    while(t--){
    string a;
    cin>>a;
    cout<<a[0];
    for(int i=1;i<a.length()-2;i+=2)
    {
        cout<<a[i];
    }
    cout<<a[a.length()-1]<<endl;


    }
}

