#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> nums)
{
    vector<int> runningSum = nums;

    int n = nums.size();
    for(int i = 1; i < n; i++){
        runningSum[i] = runningSum[i] + runningSum[i-1];
    }
    runningSum.insert(runningSum.begin(),0);
    for(int i = 1; i <= n; i++){
        int left = runningSum[i-1];
        int right = runningSum[n] - runningSum[i];
        if(left ==  right)
            return i-1;
    }

    return -1;
}
int main()
{
    vector<int> nums = {1,7,3,6,5,6};
    int ans  = pivotIndex(nums);
    cout << ans;
}
