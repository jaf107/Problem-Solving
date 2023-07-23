#include<bits/stdc++.h>
using namespace std;

int prev[100] = {0},length[100];

void lis(int arr[],int n)
{
    length[0] = 1;


    for(int i=1;i<n;i++)
    {
        length[i] = 1;
        for(int j=0;j<i;j++)
        {
            if(arr[i] > arr[j] && length[i] < length[j] + 1)
            {
                length[i] = length[j] + 1;
                prev[i] = j;
            }
        }
    }
    return ;
}

int main()
{

    int arr[] = {0,2,53,11,23,14,34,15,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    prev[0] = -1;
    lis(arr,n);
    cout<<"Size of LIS is :"<<*max_element(length,length+n);

    for(int i=0;i<n;i++)
        cout<<prev[i] <<" ";
    return 0;
}
