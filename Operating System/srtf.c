#include<stdio.h>
int main(){
    int at[10],bt[10],rt[10],ct,i,smallest;
    int remain=0,n,time,sum_wait=0,sum_turnaround=0;
    printf("Enter no of Processes : ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter arrival time for Process P%d : ",i+1);
        scanf("%d",&at[i]);
        printf("Enter burst time for Process P%d : ",i+1);
        scanf("%d",&bt[i]);
        rt[i]=bt[i];
    }
    printf("\n\nProcess\t|Turnaround Time| Waiting Time\n\n");
    rt[99]=9999;
    for(time=0; remain!=n; time++)    {
        smallest=99;
        for(i=0; i<n; i++){
            if(at[i]<=time && rt[i]<rt[smallest] && rt[i]>0)
            {
                smallest=i;
            }
        }
        rt[smallest]--;
        if(rt[smallest]==0){
            remain++;
            ct=time+1;
            printf("\nP[%d]\t|\t%d\t|\t%d",smallest+1,ct-at[smallest],ct-bt[smallest]-at[smallest]);
            sum_wait+=ct-bt[smallest]-at[smallest];
            sum_turnaround+=ct-at[smallest];
        }
    }
    return 0;
}
