// C program to delete element from an array
#include <stdio.h>
int main() {
    int a[100][100],r,c,i,j;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int n;
    scanf("%d",&n);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]==n){
              printf("  ");
               continue;}
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
