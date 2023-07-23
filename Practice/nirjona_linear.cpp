#include<bits/stdc++.h>
using namespace std;
void func()
{
    int n;
    cin >> n;

//    bool isPresent[n];
    vector<bool> isPresent(n,false);
    for(int i =0; i < n-1; i++)
    {
        int x;
        cin >> x;
        isPresent[x] = true;
    }

    for(int i = 0; i < n; i++)
    {
        if(!isPresent[i]){
            cout << i << endl;
        }
    }

    return;
}
int main()
{
    func();
    return 0;
}
/*

12
0 1 2 4 5 6 7 8 9 10 11
*/
