#include<bits/stdc++.h>
using namespace std;
int LIS(int arr[] ,int lis[], int n)
{
    lis[0] = 0;
    for(int i = 1;i<n;i++)
    {
        for(int j = 0 ; j< i; j++)
        {
            if(arr[i] > arr[j] && lis[i]< lis[j] + 1)
                lis[i] = lis[j] + 1;
        }
    }
    int maxE = *max_element(lis,lis + n);


    return maxE;
}
int main()
{
//    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    int arr[] = {0,9,2,5,3,7,11,8,10,13,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    int lis[n] = {1};
    int maxE = LIS(arr,lis, n);
    cout<<"The size of longest subsequence is :"<<maxE << endl << endl ;

    cout << "The sequence is :";


    stack<int> s;

    for(int i = n - 1, j = maxE;j > 0;i--)
    {
        if(lis[i] == j){
            s.push(arr[i]);
//            cout << arr[i] << " ";
            j--;
        }
    }

    while(!s.empty())
    {
        cout << s.top() <<  " ";
        s.pop();
    }
    return 0;
}
