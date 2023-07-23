
#include<bits/stdc++.h>
#define pushb push_back;
#define popb pop_back ;


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
        cin >> n;

        int a[n];
        for(int i=0; i< n; i++){
            cin >> a[i];
        }

        int m1, m2, c1=1,c2=0,i1 = 0,i2;
        m1 = a[0];
        for(int i = 1; i< n; i++)
        {
            if(a[i] == m1){
                c1++;
                i1 = i;
            }
            else {
                m2 = a[i];
                c2++;
                i2 = i;
            }
        }

//        cout << m1 << " " <<  c1 << endl;
//        cout << m2 << " " <<  c2 << endl;

        if(c2 == 1)
        {
            cout << i2 + 1 << endl;
        }else
        {
            cout <<  i1 + 1 <<  endl;
        }



    }

}
