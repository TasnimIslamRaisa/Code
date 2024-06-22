#include<stdio.h>
main()
{
int a,u1,b,u2;
float p1,p2,x,y,VALOR_A_PAGAR;
scanf("%d%d%f",&a,&u1,&p1);
scanf("%d%d%f",&b,&u2,&p2);
x = (u1*p1);
y = (u2*p2);
VALOR_A_PAGAR=( x+y );
printf("VALOR A PAGAR: R$ %f\n",VALOR_A_PAGAR);
return 0;
}
