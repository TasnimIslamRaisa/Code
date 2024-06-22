#include<stdio.h>
main()
{
int i;
scanf("%d",&i);
if(i%2==0)
{
printf("%d\n%d\n%d\n%d\n%d\n%d\n",i+1,i+3,i+5,i+7,i+9,i+11);
}
else if(i%2!=0)
{
printf("%d\n%d\n%d\n%d\n%d\n%d\n",i,i+2,i+4,i+6,i+8,i+10);
}
return 0;
}
