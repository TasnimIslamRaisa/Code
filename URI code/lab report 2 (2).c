#include<stdio.h>
main()
{
 int a;
 scanf("%d",&a);
 if((a%5==0) && (a%11==0))
 printf("The number is divisible by 5 and 11\n");
 else
 printf("The number is not divisible by 5 and 11\n");
 return 0;
 }
