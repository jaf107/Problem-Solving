#include<bits/stdc++.h>
using namespace std;

int houseRobber(vector<int> houses)
{
    int maxMoney = 0;
    int length = houses.size();
    vector<int> maxMoneyHouses (length+2, 0) ;
    int rob1 = 0, rob2 = 0, temp =0;
    maxMoneyHouses[0] = maxMoneyHouses[1] = 0;

    for(int i = 0; i < houses.size(); i++){
        maxMoneyHouses[i+2] = max(houses[i] +  maxMoneyHouses[i+2-2], maxMoneyHouses[i+2-1]);
//        rob
    }

    for(int i = 0; i < length + 2; i++){
//        cout << maxMoneyHouses[i] << " ";
    }

    return maxMoneyHouses[length+1];
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


    cout << houseRobber(a);

    return 0;
}
