
#include<bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define INFL 9223372036854775807
#define pii pair<int,int>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define ll long long
#define ull unsigned long long
#define M 1000000007
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define take(x) scanf("%d",&x)
#define DE(x) printf("\ndebug %d\n",x);
#define vout(x) for(int i=0;i<x.size();i++) printf("%d ",x[i]);
#define pie acos(-1)
#define MOD 1000000007
#define MAX 1000005

int main()
{
    FASTIO;
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin >> n;

        int nn = n*2, oddC = 0, evenC = 0;
        int a[nn];
        for(int i = 0;  i < (nn); i++)
        {
            cin >> a[i];
            if(a[i] % 2)
                oddC++;
            else
                evenC++;
        }

        if(oddC == evenC && evenC == n){
            cout << "Yes" << endl;
        }else{
            cout<< "No" << endl;
        }


    }

    return 0;
}
