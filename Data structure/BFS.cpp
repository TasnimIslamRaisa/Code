//BFS
#include <iostream>
#include<string>
#include<queue>
using namespace std;
int arr[500]={0},size=500,f=-1,r=-1;
int isempty(int a[]){
    if(f==-1 && r==-1)
    return 1;
    return 0;
}
int isfull(int a[]){
    if(r==size-1){
        return 1;
    }
    return 0;
}
void enq(int data){
    if(isfull(arr))
    cout<<"Queue is Overflow!"<<endl;
    else{
        r=r+1;
        arr[r]=data;
    }
}
int deq(){
    int d=-1;
    if(isempty(arr))
    cout<<"Queue is under flow"<<endl;
    else{
        f=f+1;
        d=arr[f];
        return d;
    }
}
int main() {
    int i=0,j;
    int visited[9]={0,0,0,0,0,0,0,0,0};
    int a[9][9]={
       {0,1,1,0,0,1,0,0,0},
       {0,0,1,0,0,0,1,0,0},
       {0,0,0,0,0,1,0,0,0},
       {0,0,1,0,0,0,0,0,0},
       {0,0,1,1,0,0,0,1,0},
       {0,0,0,1,0,0,0,0,0},
       {0,0,1,0,1,0,0,0,0},
       {0,0,0,1,0,0,0,0,1},
       {0,0,0,0,1,0,1,0,0}
    };
    cout<<i<<" ";
    visited[i]=1;
    enq(i);
    while(!isempty(arr)){
        int node =deq();
        for(j=0;j<7;j++){
            if(a[node][j]==1 && visited[j]==0){
                cout<<j<<" ";
                visited[j]=1;
                enq(j);
            }
        }
    }

    return 0;
}
