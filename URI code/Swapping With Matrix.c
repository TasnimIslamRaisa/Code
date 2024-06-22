#include<stdio.h>
int main(){
    int arr[500][500],n,x,y,i;
    scanf("%d",&n);
    //scanf("%d %d",&x,&y);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d ",&arr[i][j]);
    }
    }
    for(i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ",arr[j][i]);
        }
      //printf("\n");
    }
}
