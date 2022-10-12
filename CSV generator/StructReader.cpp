#include<iostream>
using namespace std; 

struct Process{
    int pid; 
    int at; 
    int bt;
};

Process ReadProcessData(int processCount)
{
    Process proc[processCount]; 

    for (int i = 0; i<processCount; i++)
    {
        cout<<"\nEnter Process ID:";
        cin>>proc[i].pid; 
        cout<<"\nEnter Arrival Time:";
        cin>>proc[i].at; 
        cout<<"\nEnter Brust Time:";
        cin>>proc[i].bt; 
    }
    
    for (int i = 0; i<processCount; i++)
    {
        cout<<"\nProcess: " <<proc[i].pid; 
        cout<<"\nArrival Time:"<<proc[i].at; 
        cout<<"\nBrust Time:"<<proc[i].bt; 
    }
    
    return *proc; 
}

void PrintProcesses(Process *proc)
{
    cout<<"Sizee is: "<<sizeof(*proc);
    cout<<"Process: Arrival Time: Brust Time:";
    for (int i = 0; i<sizeof(*proc); i++)
    {
        cout<<"\n"<<proc[i].pid<<"\t"<<proc[i].at<<"\t"<<proc[i].bt; 
    }
}

int main()
{
    int proCt; 
    cout<<"Enter no of processes: ";
    cin>>proCt;
    Process p = ReadProcessData(proCt);
    PrintProcesses(&p);
    return 0; 
}