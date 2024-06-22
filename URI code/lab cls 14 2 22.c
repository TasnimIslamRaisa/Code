#include<stdio.h>
main()
{
int a,b,c,d,e,arg;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
arg = (a+b+c+d+e)/5;
if(arg%2==0)
    printf("The number is even");
else
    printf("The number is odd");

return 0;
}
