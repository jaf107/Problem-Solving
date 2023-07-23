#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;
void printArray(vector<int> nums1,vector<int> nums2)
{
    cout << "Nums1 :";
    for(auto x: nums1)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "Nums2 :";
    for(auto x: nums2)
    {
        cout << x << " ";
    }
    cout << endl;
}
vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
{
    vector<int> intersection;
    vector<int> flag1(nums1.size(), 1);
    vector<int> flag2(nums2.size(), 1);


    /*for(auto i = nums1.begin(); i != nums1.end(); i++)
    {
        for(auto j = nums2.begin(); j != nums2.end(); j++)
        {
            if(*i == *j)
            {
                intersection.push_back(*j);

                printArray(nums1,nums2);
            }
        }
    }
    */


    for(int i = 0; i < nums1.size(); i++)
    {
        for(int j = 0; j < nums2.size(); j++)
        {
            if((nums1[i] == nums2[j]))
            {
                if(flag1[i] && flag2[j])
                {

                    flag1[i] = 0;
                    flag2[j] = 0;
                    intersection.push_back(nums1[i]);
                }
            }
        }
    }
//    for(auto x: intersection)
//    {
//        cout << x << " ";
//    }


    return intersection;
}


int main()
{
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};

    vector<int> ans = intersect(nums1,nums2);


    return 0;
}
