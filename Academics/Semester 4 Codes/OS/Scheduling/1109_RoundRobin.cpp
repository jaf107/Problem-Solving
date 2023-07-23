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
    int remaining_bt;
};

void printStats(process a[],int n)
{
    cout<<"Stats :\n";

    cout<<"PID\tArriT\tBurst\tCompT\tTurnAT\twaitT"<<endl;
    cout<<"----------------------------------------------"<<endl;

    for(int i=0; i<n; i++)
    {
//        cout<<a[i]->processID<< " "<<a[i]->arrivalTime<<" "<<
//        a[i]->burstTime<<" "<<a[i]->completionTime<<" "<<
//        a[i]->turnAroundTime<<" "<<a[i]->waitingTime<<endl;

        cout<<a[i].processID<<"\t"<<a[i].arrivalTime<<"\t"<<
            a[i].burstTime<<"\t"<<a[i].completionTime<<"\t"<<
            a[i].turnAroundTime<<"\t"<<a[i].waitingTime<<endl;
    }
}


void RoundRobin(process p[], int n,int quantum)
{
    int t = 0;

    while(1)
    {
        bool done = true;
        for(int i=0; i<n; i++)
        {

            if( p[i].remaining_bt  > 0 )
            {
                done = false;
                if( p[i].remaining_bt > quantum )
                {
                    t += quantum;
                    p[i].remaining_bt -=  quantum;
                }
                else
                {
                    t += p[i].remaining_bt;
                    p[i].remaining_bt = 0; //  Process over.

                    p[i].waitingTime = t - p[i].burstTime;

                }
            }
        }

        if(done)
            break;
    }


    // Turn Around time

    for(int i=0;i<n;i++)
    {
        p[i].turnAroundTime  = p[i].waitingTime + p[i].burstTime;
    }


    // Completion time

    for(int i=0;i<n;i++)
    {
        p[i].completionTime = p[i].turnAroundTime + p[i].arrivalTime;
    }




}


int main()
{

    int n = 6;
    process p[n];

    int processes[] = { 1, 2, 3,4,5,6};
    int priority[] = {8,3,4,4,5,5};
    int arrival[] = {0,0,20,25,45,55};
    int burstTime[] = {15,20,20,20,5,15};

    for(int i=0; i<n; i++)
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

        p[i].remaining_bt = burstTime[i];
    }

    int quan = 5;

    RoundRobin(p,n,quan);

    printStats(p,n);
}
