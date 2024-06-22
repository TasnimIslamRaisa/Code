#include<stdio.h>
#include<math.h>
main()
{
double a,b,c,m,n,o,R1,R2;
scanf("%lf%lf%lf",&a,&b,&c);
o = ((b*b)-4*a*c);
m = (-b)+ sqrt(o);
n = (-b)- sqrt(o);

if((a==0) || (o<0))
   printf("Impossivel calcular\n");
else
{
  R1 = (m/(2*a));
  R2 = (n/(2*a));
   printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);
}
return 0;
}
