#include<stdio.h>
main()
{
int year;
scanf("%d",&year);
 if((year%4==0) && (year%100!=0))
{
  printf("This year is Leap year\n");

}
else if(year%400==0)

 printf("This year is Leap year\n");
else
printf("This year is not Leap year\n");
return 0;
}
