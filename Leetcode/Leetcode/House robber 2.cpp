#include<bits/stdc++.h>
using namespace std;

int houseRobber(vector<int> houses)
{
    int maxMoney = 0;
    int length = houses.size();
    vector<int> maxMoneyHouses (length+2, 0) ;
    maxMoneyHouses[0] = maxMoneyHouses[1] = 0;

    for(int i = 0; i < houses.size(); i++){
        maxMoneyHouses[i+2] = max(houses[i] +  maxMoneyHouses[i+2-2], maxMoneyHouses[i+2-1]);
    }

    for(int i = 0; i < length + 2; i++){
//        cout << maxMoneyHouses[i] << " ";
    }

    return maxMoneyHouses[length+1];
}

int rob(vector<int> houses)
{
    int s = houses.size();

    if(s==1){
        return houses[0];
    }

    vector<int> exceptFirstHouse ;
    for(int i = 1; i < s; i++){
        exceptFirstHouse.push_back(houses[i]);
    }

    vector<int> exceptlastHouse ;
    for(int i = 0; i < s-1; i++){
        exceptlastHouse.push_back(houses[i]);
    }

    int eFH = houseRobber(exceptFirstHouse);
    int eLH = houseRobber(exceptlastHouse);

//    cout << eFH << " " << eLH;

    return max(houseRobber(exceptFirstHouse), houseRobber(exceptlastHouse));
}

int main()
{
    vector<int> a;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        a.push_back(temp);
    }


    cout << rob(a);

    return 0;
}

