#include<bits/stdc++.h>
using namespace std;
int partitionQS(int arr[],int low ,int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j< high ; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quickSort(int arr[],int low,int high)
{
    if( low < high)
    {
        int p = partitionQS(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}
int main()
{

    int arr[] = {4,1,23,14,10,20,19};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Unsorted Array :";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    quickSort(arr,0,n);

    cout<<"\nSorted Array :";
    for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
}
