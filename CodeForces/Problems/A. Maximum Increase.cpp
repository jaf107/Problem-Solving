#include<bits/stdc++.h>
using namespace std;
void printArray(int lis[],int n)
{
    for(int i = 0; i< n;i++)
        cout<<lis[i]<<" ";
    cout<<endl;
}
int lis(int a[],int n)
{
    int lis[n] = {1};

    for(int i = 1 ; i<n ; i++)
    {
        for(int j = 0; j<i ; j++)
        {
            if(a[i]> a[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
            }
        }
    }

//    printArray(lis,n);
    int cis[n] ;
    for(int i = 0 ; i< n ; i++)
        cis[i] = 1;
//    printArray(cis,n);
    for(int i = 1 ; i< n ;i++)
    {
        if(lis[i]>lis[i-1])
            cis[i] = cis[i-1] + 1;
    }
//    printArray(cis,n);

   return *max_element(cis,cis+n);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n ; i++)
        cin>>a[i];
    cout<<lis(a,n);
}


