#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        int a[n];

        int c = 0; // c- even-> first, c- odd-> second
        for(int i=0; i<n ; i++)
            cin>>a[i];

        for(int i=0; i<n ; i++)
        {
            if(a[i]==1)
                c++;
            else
                break;
        }

        if(c == n)
        {
            if(c%2 == 1)
                cout<<"First"<<endl;
            else
                cout<<"Second"<<endl;
        }
        else
        {
            if(c%2 == 0)
                cout<<"First"<<endl;
            else
                cout<<"Second"<<endl;

        }

    }

}
