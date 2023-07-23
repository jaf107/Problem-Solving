

#include<bits/stdc++.h>

using namespace std;

struct process
{
    int processID;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int turnAroundTime;
    int waitingTime;
    int priority;
};



void printStats(process a[],int n)
{
    cout<<"Stats :\n";

    cout<<"PID\tArriT\tBurst\tCompT\tTurnAT\twaitT\tprioT"<<endl;
    cout<<"-----------------------------------------------------"<<endl;

    for(int i=0;i<n;i++)
    {
//        cout<<a[i]->processID<< " "<<a[i]->arrivalTime<<" "<<
//        a[i]->burstTime<<" "<<a[i]->completionTime<<" "<<
//        a[i]->turnAroundTime<<" "<<a[i]->waitingTime<<endl;

        cout<<a[i].processID<<"\t"<<a[i].arrivalTime<<"\t"<<
        a[i].burstTime<<"\t"<<a[i].completionTime<<"\t"<<
        a[i].turnAroundTime<<"\t"<<a[i].waitingTime<<"\t"<<a[i].priority<<endl;
    }
}

void sortAsPerPriorityTime(process a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if( a[i].priority> a[j].priority)
            {
                swap(a[i],a[j]);
            }
        }
    }


}

void calculateTAT_waitT(process a[],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i].turnAroundTime = a[i].completionTime - a[i].arrivalTime;
        a[i].waitingTime = a[i].turnAroundTime - a[i].burstTime;
    }


}

void printProcessSequence(process a[],int n)
{
    cout<<"\nProcess sequence :";
    cout<<"P"<<a[0].processID;
    for(int i=1;i<n;i++)
    {
        cout<<"-> P"<<a[i].processID<<" ";
    }
    cout<<endl;
}

void calculateCompletionTime(process a[],int n)
{
    a[0].completionTime = a[0].arrivalTime + a[0].burstTime;

    for(int i=1;i<n;i++)
    {
        a[i].completionTime = max(a[i].arrivalTime,a[i-1].completionTime) + a[i].burstTime;
    }

}

void priorityNP(process p[],int n)
{
    sortAsPerPriorityTime(p,n);
    calculateCompletionTime(p,n);
    calculateTAT_waitT(p,n);
    printStats(p,n);
    printProcessSequence(p,n);
}


int main()
{
    int n = 6;
    process p[n];

    int processes[] = { 1, 2, 3,4,5,6};
    int priority[] = {8,3,4,4,5,5};
    int arrival[] = {0,0,20,25,45,55};
	int burstTime[] = {15,20,20,20,5,15};

    for(int i=0;i<n;i++)
    {
//        p[i]->processID = processes[i];
//        p[i]->arrivalTime = arrival[i];
//        p[i]->burstTime = burstTime[i];
//        p[i]->completionTime = 0;
//        p[i]->turnAroundTime = 0;
//        p[i]->waitingTime = 0;

        p[i].processID = processes[i];
        p[i].arrivalTime = arrival[i];
        p[i].burstTime = burstTime[i];
        p[i].completionTime = 0;
        p[i].turnAroundTime = 0;
        p[i].waitingTime = 0;
        p[i].priority = priority[i];
    }
    priorityNP(p,n);





}

