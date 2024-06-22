#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    printf(" ");
    return 0;
}
