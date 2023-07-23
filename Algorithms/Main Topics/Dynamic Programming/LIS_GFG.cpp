#include<bits/stdc++.h>
using namespace std;
int lis(int arr[],int n)
{
    int lis[n];

    lis[0] = 1;

    //Compute optimized LIS values in bottom up manner

    for(int i=1;i<n;i++)
    {
        lis[i] = 1;
        for(int j=0;j<i;j++)
        {
            if(arr[i] > arr[j] && lis[i] < lis[j]+1)
                lis[i] = lis[j] + 1;
        }
    }

    //Return maximum value in lis[]

    return *max_element(lis,lis+n);
}

int main()
{
    int arr[] = {2,53,11,23,14,34,15,20};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Size of LIS is :"<<lis(arr,n);
    return 0;
}

