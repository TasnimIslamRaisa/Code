// knapsack
#include <bits/stdc++.h>
using namespace std;
void knapsack(int n,float weight[],float profit[],float capacity){
    float x[100],tp=0;
    int i,j,u;
    u=capacity;
    for(i=0;i<n;i++){
        x[i]=0.0;
        if(weight[i]>u){
            break;
        } else {
            x[i]=1.0;
            tp+=profit[i];
            u-=weight[i];
        }
    }
    if(i<n){
        x[i]=u/weight[i];
    }
    tp+=x[i]*profit[i];
    cout<<"Result vector ";
    for(i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
    cout<<"Maximum profit : "<<tp;
}

int main() {
    float weight[100],profit[100],capacity;
    int i,j,n;
    float ratio[100];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>weight[i]>>profit[i];
    }
    cin>>capacity;
    for(i=0;i<n;i++){
        ratio[i]=profit[i]/weight[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(ratio[i]<ratio[j]){
                swap(ratio[i],ratio[j]);
                swap(weight[i],weight[j]);
                swap(profit[i],profit[j]);
            }
        }
    }
    knapsack(n,weight,profit,capacity);
    return 0;
}
