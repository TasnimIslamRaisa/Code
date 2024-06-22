#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of proccess: ";
    cin>>n;
    int at[10],bt[10],rt[10];
    cout<<"Process\t\tAt\tBt\n";
    for(int i=0;i<n;i++){
        cout<<"P"<<i<<"\t\t";
        cin>>at[i];
        cin>>bt[i];
        rt[i]=bt[i];
    }
    int small,remain=0,ct;
    cout<<"\n\nProcess\t\tTurnaround-Time\t\tWaiting-Time\n";
    rt[99]=999;
    for(int time=0;remain!=n;time++){
        small=99;
        for(int i=0;i<n;i++){
            if(at[i]<=time && rt[i]<rt[small] && rt[i]>0){
                small=i;
            }
        }
        rt[small]--;
        if(rt[small]==0){
            remain++;
            ct=time+1;
            cout<<"P"<<small+1<<"\t\t\t"<<ct-at[small]<<"\t\t\t"<<ct-bt[small]-at[small]<<endl;
        }
    }
    return 0;
}
