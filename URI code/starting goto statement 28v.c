#include<stdio.h>
main()
{
 int a=0;
 start:
   printf("%d",a);
   a++;
   if(a<=7)
   goto start;
   return 0;

}
