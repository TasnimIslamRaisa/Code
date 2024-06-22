#include<bits/stdc++.h>
using namespace std;
int main()
{
    int memory[100];
    int BlockSize[100],NumBlock;
    cout<<"Enter the Number of Block : ";
    cin>>NumBlock;
    cout<<"\nEnter the Size of each memory Block : "<<endl;
    for(int i=0; i<NumBlock; i++)
    {
        cout<<"Block "<<i+1<<": ";
        cin>>BlockSize[i];
        memory[i] = -1;
    }
    int NumProcess;
    cout<<"\nEnter the Number of Process : ";
    cin>>NumProcess;
    cout<<"\nEnter the Size of each process : "<<endl;
    for(int i=0; i<NumProcess; i++)
    {
        int ProcessSize;
        cout<<"Process "<<i+1<<": ";
        cin>>ProcessSize;

        int j;
        for(j=0; j<NumBlock; j++)
        {
            if(memory[j] == -1 && BlockSize[j] >= ProcessSize)
            {
                memory[j] = i+1;
                break;
            }
        }
        if(j == NumBlock)
        {
            cout<<"Process "<<i+1<<" cannot be allocated\n";
        }
    }
    cout<<"\nMemory Allocation : "<<endl;
    for(int i=0; i<NumBlock; i++)
    {
        cout<<"Block "<<i+1<<": ";
        if(memory[i] != -1) cout<<" Process "<<memory[i]<<endl;
        else cout<<"Unallocated"<<endl;
    }
}
