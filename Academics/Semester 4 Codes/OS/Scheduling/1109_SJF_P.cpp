

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
    int remainingTime;
};



void printStats(process a[],int n)
{
    cout<<"Stats :\n";

    cout<<"PID\tArriT\tBurst\tCompT\tTurnAT\twaitT"<<endl;
    cout<<"----------------------------------------------"<<endl;

    for(int i=0;i<n;i++)
    {
//        cout<<a[i]->processID<< " "<<a[i]->arrivalTime<<" "<<
//        a[i]->burstTime<<" "<<a[i]->completionTime<<" "<<
//        a[i]->turnAroundTime<<" "<<a[i]->waitingTime<<endl;

        cout<<a[i].processID<<"\t"<<a[i].arrivalTime<<"\t"<<
        a[i].burstTime<<"\t"<<a[i].completionTime<<"\t"<<
        a[i].turnAroundTime<<"\t"<<a[i].waitingTime<<endl;
    }
}

void calculateTAT_CompletionTime(process p[],int n)
{
    for(int i=0;i<n;i++)
    {
        p[i].turnAroundTime  = p[i].waitingTime + p[i].burstTime;
        p[i].completionTime = p[i].turnAroundTime + p[i].arrivalTime;
    }

}

void shortestJobFirst_preemptive(process p[],int n)
{
    int t = 0;

    int complete = 0,minm = INT_MAX , shortest = 0,finishTime;
    bool done = false;

    while(complete != n)
    {


        for(int i=0;i<n;i++)
        {
            if(( p[i].arrivalTime <= t ) &&
                (p[i].remainingTime < minm) && (p[i].remainingTime > 0) )
            {
                done = true;
                shortest = i;
                minm = p[i].remainingTime;


            }

        }
        if(done == false)
        {
            t++;
            continue;
        }

        p[shortest].remainingTime--;

        minm = p[shortest].remainingTime;
        if(minm == 0)
            minm = INT_MAX;

        if( p[shortest].remainingTime == 0 )
        {
            complete++;
            done = false;

            finishTime = t+1;

            p[shortest].waitingTime = finishTime - p[shortest].burstTime - p[shortest].arrivalTime;


//            if( p[shortest].waitingTime < 0 )
//                p[shortest].waitingTime = 0;


        }
        t++;

    }

    calculateTAT_CompletionTime(p,n);
}
int main()
{
//    int n = 6;
//    process p[n];
//
//    int processes[] = { 1, 2, 3,4,5,6};
//    int priority[] = {8,3,4,4,5,5};
//    int arrival[] = {0,0,20,25,45,55};
//	int burstTime[] = {15,20,20,20,5,15};

    int n = 4;
    process p[n];
    int processes[] = {1,2,3,4};
    int priority[] = {1,1,1,1};
    int arrival[] = {0,2,3,8};
	int burstTime[] = {12,4,6,5};

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

        p[i].remainingTime = burstTime[i];
    }
    shortestJobFirst_preemptive(p,n);

    printStats(p,n);




}
