#include<stdio.h>
int main()
{
    int x,i,max=0,pos;
    for(i=1;i<=100;i++){
        scanf("%d",&x);
        if(x>max){
            max=x;
            pos=i;
        }
    }
        printf("%d\n",max);
        printf("%d\n",pos);

    return 0;
}
