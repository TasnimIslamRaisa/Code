#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,b,c,x,AB;
    scanf("%d%d%d",&a,&b,&c);
    AB = (a+b+abs(a-b))/2;
    x = (AB+c+abs(AB-c))/2;
    printf("%d eh o maior",x);
    return 0;

}
