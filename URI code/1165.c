#include<stdio.h>
int main()
{
    int n,i,j,x,flag=0;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d",&n);
        if(n==1)
            printf("%d nao eh primo\n",n);
        else if(n<4)
            printf("%d eh primo\n",n);
        else{
            for(j=2;j<n;j++){
                if(n%j==0){
                    flag=1;
                break;}
                else
                    flag=2;
            }
        }
        if(flag==1)
            printf("%d nao eh primo\n",n);
        else if(flag==2)
            printf("%d eh primo\n",n);
    }
    return 0;

}
