#include<stdio.h>
main()
{
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);

 if((a==b)&&(a==c))

 printf("The triangle is equilateral");

 else if((a==b)||(b==c) ||(a==c))
 printf("The triangle is isosceles");
 else
 printf("The triangle is scalene");

 return 0;
}

