#include<stdio.h>
main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a<b && (a<c)))
{
printf("%d\n",a);
}
else if((b<c) && (b<a))
{
printf("%d\n",b);
}
else
{
printf("%d\n",c);
}
printf("\n%d\n%d\n%d\n",a,b,c);
return 0;
}
