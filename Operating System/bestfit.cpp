#include<bits/stdc++.h>
using namespace std;
int main()
{
    int memory[100];
    int block,block_size[100];
    cout<<"Enter the number of block : ";
    cin>>block;
    for(int i=0; i<block; i++)
    {
        cout<<"Block "<<i+1<<": ";
        cin>>block_size[i];
        memory[i]=-1;
    }
    int process;
    cout<<"Enter the number of Process : ";
    cin>>process;
    for(int i=0; i<process; i++)
    {
        int process_size;
        cout<<"Process "<<i+1<<": ";
        cin>>process_size;

        int bestfitindex=-1;
        int j;
        for(j=0; j<process; j++)
        {
            if(memory[j] == -1 && block_size[j] >= process_size)
            {
                if(bestfitindex == -1 || block_size[j] < block_size[bestfitindex])
                {
                    bestfitindex = j;
                }
            }
        }
        if(bestfitindex != -1)
            memory[bestfitindex] = i+1;
        else cout<<"Process "<<i+1<<" cannot be allocated"<<endl;
    }     // Display memory allocation
    cout<<"\nMemory Alocation\n";
    for(int i=0; i<block; i++)
    {
        cout<<"Block "<<i+1<<": ";
        if(memory[i] != -1) cout<<"Process "<<memory[i]<<endl;
        else cout<<"Undifined"<<endl;
    }
}
