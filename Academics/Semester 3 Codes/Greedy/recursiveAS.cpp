#include<bits/stdc++.h>
using namespace std;

struct activity{
    int startTime;
    int finishTime;
};

int n;

vector<activity> activities;
vector<int> selectedActivities;

void printVector(vector<activity> a)
{
    for(int i = 0; i< n; i++)
    {
        cout << a[i].startTime << " " << a[i].finishTime << endl;
    }
}


int recursive_activity_selector(int s[],int f[], int k, int n)
{
    int m = k + 1;
    while( m <= n && s[m] < f[k])
        m++;
    if( m <= n){
        selectedActivities.push_back(m);
        return 1 + recursive_activity_selector(s,f,m,n);
    }

    else
        return 0;
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

    selectedActivities.push_back(0);
    cout << "Total number of activities: " << recursive_activity_selector(s,f,0,n)+1 << endl;

    for(int i = 0; i < selectedActivities.size(); i++)
    {
        cout << selectedActivities[i]+ 1 << " ";
    }
//    printVector(selectedActivities);


}

