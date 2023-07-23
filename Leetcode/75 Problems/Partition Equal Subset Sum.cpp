#include<bits/stdc++.h>
using namespace std;
bool canPartition(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<int> cumulSum(n);
        cumulSum[0] = nums[0];
        for(int i = 1; i < n; i++){
            cumulSum[i] = cumulSum[i-1] + nums[i];
        }

        for(int i = 0; i < n; i++)
        {
            int left = cumulSum[i];
            int right = cumulSum[n-1] - cumulSum[i];
            if(left == right){
                return true;
            }
        }
        return false;
}
int main()
{
    vector<int> nums{2,2,1,1};
    cout << canPartition(nums);

}
