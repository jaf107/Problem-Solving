#include<bits/stdc++.h>
using namespace std;
int sizeOfArray(int a[])
{
    return sizeof(a)/sizeof(a[0]);
}
void printArray(int a[],int n)
{
    for(int i=0;i< n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int left(int i)
{
    return 2*i;
}
int right(int i)
{
    return 2*i + 1;

}


void heapify(int a[],int i,int n)
{
    int l = left(i);
    int r = right(i);

    int largest = i ;
    if(l <= n && a[l] > a[i])
        largest = l;
    if(r <= n && a[r] > a[i])
        largest = r;

    if(largest != i)
    {
        swap(a[i],a[largest]);
        heapify(a,largest,n);
    }

}
void buildHeap(int a[],int n)
{
    for(int i = n -1  ; i>= 0 ;i--)
        heapify(a,i,n);
}
void heapSort(int a[],int heap_size)
{
    buildHeap(a,heap_size);
    for(int i = heap_size -1; i >= 1; i--)
    {
        swap(a[i],a[0]);
        heapify(a,0,i);
    }
}
int main()
{
    int a[] = {27,17,3,16,13,10,1,5,7,12,4,8,9,0};
    int n = sizeof(a)/ sizeof(a[0]);

    printArray(a,n);
    heapSort(a,n);

    printArray(a,n);

}
