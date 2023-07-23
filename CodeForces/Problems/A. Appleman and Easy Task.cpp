#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000
char mat[100][100];
int n;
int adjacentXcell(int i,int j)
{
    int no = 0;
    if( mat[i][j+1] == 'o' && j+1<n)
        no++;
    if(mat[i][j-1] == 'o' && j-1>=0)
        no++;
    if( mat[i+1][j] == 'o' && i+1< n)
        no++;
    if(mat[i-1][j] == 'o' && i-1>=0)
        no++;

        return no;
}
int main()
{
    n;
    cin>>n;
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j< n; j++)
        {
            cin>>mat[i][j];
        }
    }

    bool ans = true;
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j< n; j++)
        {
            if(adjacentXcell(i,j)%2 != 0)
            {
                ans = false;
//                    cout<<i<<" "<<j<<endl;
//                    cout<<adjacentXcell(i,j)<<" adjacent"<<endl;
            }
        }

    }
    if(ans)
        cout<<"YES";
    else
        cout<<"NO";
    getchar();
    return 0;

}

