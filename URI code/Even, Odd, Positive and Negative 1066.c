#include<stdio.h>
main()
{
int a,b,c,d,e,count;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if((a%2==0) && (b%2==0)&&(c%2==0)&&(d%2==0)&&(e%2==0))
{
count++;
printf("%d even",count++);
}
else if((a%2!=0) && (b%2!=0)&&(c%2!=0)&&(d%2!=0)&&(e%2!=0))
{
count++;
printf("%d odd",count++);
}
if((a>0)&&(b>0) && (c>0) && (d>0) && (e>0))
{
count++;
printf("%d p",count++);
}
if((a<0) && (b<0) && (c<0) && (d<0) && (e<0))
{
count++;
printf("%d n",count);
}
return 0;
}
