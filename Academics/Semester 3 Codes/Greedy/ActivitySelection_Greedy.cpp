#include<bits/stdc++.h>
using namespace std;

struct activity{
    int startTime;
    int finishTime;
};

int n;

vector<activity> activities;
vector<activity> selectedActivities;

void printVector(vector<activity> a)
{
    for(int i = 0; i< n; i++)
    {
        cout << a[i].startTime << " " << a[i].finishTime << endl;
    }
}

void greedy_activity_selector()
{
    selectedActivities.push_back(activities[0]);
    int  k = 0;
    for(int i = 1; i < n; i++)
    {
        if(activities[i].startTime > activities[k].finishTime){
            selectedActivities.push_back(activities[i]);
            k = i;
        }
    }
}

int main()
{
    n = 11;
    int s[] = {1,3,0,5,3,5,6,8,8,2,12};
    int f[] = {4,5,6,7,8,8,10,11,12,14,16};

    for(int i = 0; i < n; i++)
    {
        activity a;
        a.startTime = s[i];
        a.finishTime = f[i];

        activities.push_back(a);
    }

    greedy_activity_selector();

    printVector(selectedActivities);


}
