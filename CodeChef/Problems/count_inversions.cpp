#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long

using namespace std;

ll myMerge(ll a[],int left, int mid, int right){

    int i=left, j=mid, k=0;

    int temp[right - left +1];
    ll countI = 0;

    while(i<mid && j<=right){
        if(a[i] <= a[j] ){
            temp[k++] = a[i++];
        }else{
            temp[k++] = a[j++];
            countI += (mid-i);
        }
    }

    while(i < mid){
        temp[k++] = a[i++];
    }
    while(j <= right){
        temp[k++] = a[j++];
    }

    for(int i=left,k=0; i<= right; i++,k++){
        a[i] = temp[k];
    }
    return countI;
}



ll merge_sort(ll a[], int left,int right){

    ll countI = 0;
    if(right > left){
        int mid = (left + right)/2;

        ll countLeft = merge_sort(a,left,mid);
        ll countRight = merge_sort(a,mid+1, right);
        ll myCount = myMerge(a,left,mid+1,right);

        countI = myCount + countLeft + countRight;
    }
    return countI;
}

long long solve(ll A[ ],int n){
    ll ans = merge_sort(A,0, n-1);
    return ans;
}

int main(){
    ll n;
    cin >> n;
    ll a[n], inversionCounter[n];
    for(int i=0; i<n; i++)
        cin >> a[i];

    cout << solve(a,n);


    return 0;
}
