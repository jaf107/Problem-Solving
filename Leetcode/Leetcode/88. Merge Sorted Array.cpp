
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    vector<int> ans;
    int i = 0, j = 0;
    while(m+n > i+j){
        if(nums1[i] == 0){
                ans.PB(nums2[j++]);
            continue;
        }
        if(nums1[i] > nums2[j]){
            ans.PB(nums2[j++]);
        }else{
            ans.PB(nums1[i++]);
        }
    }
    nums1 = ans;

//    for(auto x: nums1){
//        cout << x << " ";
//    }
}
int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};

    int m = 3;
    int n = 3;

    merge(nums1,m,nums2,n);
    return 0;
}
