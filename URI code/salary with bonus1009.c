#include<stdio.h>
main()
{
 //char name;
 double a,salary,sold,TOTAL;
 //scanf("%c",&name);
 scanf("%lf%lf",&salary,&sold);
 a = ( 15*sold )/100;
 TOTAL = (salary + a) ;

 printf("TOTAL = R$ %lf\n",TOTAL) ;
 return 0;
}
