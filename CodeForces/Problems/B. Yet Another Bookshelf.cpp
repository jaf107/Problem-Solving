#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;
        int books[n];
        int first1 = -1, last1 = -1;
        for(int i = 0; i < n; i++){
            cin >> books[i];
            if(books[i] == 1 && first1 == -1)
                first1 = i;
        }

        for(int i = n-1; i >= 0; i--)
        {
            if(books[i] == 1)
            {
                last1 = i;
                break;
            }
        }

        int zeroC = 0;

//        cout << first1 << last1 ;

        for(int i = first1; i <= last1; i++)
        {
            if(books[i] == 0)
                zeroC++;
        }

        cout << zeroC << endl;

    }
    return 0;
}
