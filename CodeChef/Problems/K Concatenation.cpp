#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll maxSubSum(int *arr, int n){
    ll best_so_far = 0;
    ll current_sum = 0;

    for(int i=0; i<n; i++){
        current_sum += arr[i];
        best_so_far = max(best_so_far,current_sum);

        if(current_sum < 0)
            current_sum = 0;
    }

    return best_so_far;
}


int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        int n,k;
        cin >> n >> k;

        int a[n], b[n*k];
        int sizeB = n*k;
        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < sizeB ;i++)
        {
            int j = i % n;
            b[i] = a[j];
        }
//        for(int i = 0; i < sizeB ;i++)
//            cout << b[i] << " ";

        cout << maxSubSum(b, sizeB) << endl;


    }
}

