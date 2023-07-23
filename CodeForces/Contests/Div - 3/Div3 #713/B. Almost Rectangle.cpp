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

    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin >> n;

        char a[n][n];

        int i1 = -1, i2 = -1, j1 = -1, j2 = -1;
        bool case1 = false;
        for(int i = 0; i< n; i++)
        {
            for(int j = 0; j<n ; j++)
            {
                cin >> a[i][j];

                if(a[i][j] == '*')
                {
                    if(!case1)
                    {
                        i1 = i;
                        j1 = j;
                        case1 = true;
                    }
                    else{
                        i2 = i;
                        j2 = j;
                    }
                }
            }
        }


        if(i1 == i2)
        {
            if(i2+1 < n)
                i2++;
            else
                i1--;
        }

        if(j1 == j2)
        {
            if(j2+1 < n)
                j2++;
            else
                j1--;
        }

//        printf("\n%d is i1 & %d is j1\n", i1, j1);
//        printf("\n%d is i2 & %d is j2\n", i2, j2);
//        cout << endl;
        bool c = false;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j< n ; j++)
            {
                c= false;
                if(i == i1 || i == i2)
                {
                    if(j == j1 || j == j2)
                        c = true;
                }

                if(c)
                {
                    printf("*");
                }
                else
                {
                    printf(".");
                }
            }

            printf("\n");
        }





    }

    return 0;

}

