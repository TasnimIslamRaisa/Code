#include<stdio.h>
main()
{
int a,b,d;
scanf("%d%d",&a,&b);
d = (b-a);
if(d>0)
{
 d= (b-a);
printf("O JOGO DUROU %d HORA(S)\n",d);
}
else
{
d = (24+(b-a));
printf("O JOGO DUROU %d HORA(S)\n",d);
}
return 0;
}
