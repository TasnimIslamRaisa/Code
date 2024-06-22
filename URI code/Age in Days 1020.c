#include<stdio.h>
main()
{
 int a,x,y,z;
 scanf("%d",&a);
 x = (a/365);
 y = (a%365)/30;
 z = ((a%365)%30);
 printf("%d ano(s)\n",x);
 printf("%d mes(es)\n",y);
 printf("%d dia(s)\n",z);


 return 0;
}
