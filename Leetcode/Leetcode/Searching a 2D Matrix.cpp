
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;
void printArray(vector<vector<int>>& vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
}
bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    if(target > matrix.back().back())
    {
        return false;
    }
    int mRow = -1;
    int low = 0;
    int high = matrix.size();
    int mid = (low + high)/2;
    while(low < high)
    {
//        vector<int> row = matrix[mid];

        mid = (low + high);
        mid /= 2;
//        printf("\nCol: %d %d %d\n",low, mid, high);
        if(target < matrix[mid].back())
        {
//            printf(" Target\t: %d \n Mid\t: %d \n Row[0]\t: %d\n",target, mid, row[0]);

            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
        mRow = high;
//    cout << mRow << endl;
    low = 0;
    high = matrix[0].size();
    mid = low + high;
    mid /= 2;
    while(low <= high)
    {
//        printf("Row: %d %d %d\n",low, mid, high);
        mid = (low + high);
        mid /= 2;
//        if(target < matrix[mRow].back()){
//            high = mid;
//        }
//        else{
//            low = mid + 1;
//        }

        if(target > matrix[mRow][mid])
        {
            low = mid + 1;
        }
        else if( target < matrix[mRow][mid])
        {
            high = mid - 1;
        }
        else
        {
            cout << target << " " << matrix[mRow][mid] << endl;
            return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix
    {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23,30,34,60}
    };

    cout << searchMatrix(matrix,100);

    return 0;
}
