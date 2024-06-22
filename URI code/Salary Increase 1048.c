#include<stdio.h>
main()
{
float a,p,s;
scanf("%f",&a);

if((a>=0) && (a<=400))
{
p = ((15*a)/100);
s = (a+p);
printf("Novo salario: %.2f\n",s);
printf("Reajuste ganho: %.2f\n",p);
printf("Em percentual: 15 %%");
}
else if((a>400) && (a<=800))
{
p = ((12*a)/100);
s = (a+p);
printf("Novo salario: %.2f\n",s);
printf("Reajuste ganho: %.2f\n",p);
printf("Em percentual: 12 %%");
}
else if((a>800) && (a<=1200))
{
p = ((10*a)/100);
s = (a+p);
printf("Novo salario: %.2f\n",s);
printf("Reajuste ganho: %.2f\n",p);
printf("Em percentual: 10 %%");
}
else if((a>1200) && (a<=2000))
{
p = ((7*a)/100);
s = (a+p);
printf("Novo salario: %.2f\n",s);
printf("Reajuste ganho: %.2f\n",p);
printf("Em percentual: 7 %%");
}
else
{
p = ((4*a)/100);
s = (a+p);
printf("Novo salario: %.2f\n",s);
printf("Reajuste ganho: %.2f\n",p);
printf("Em percentual: 2 %%");
}
return 0;
}
