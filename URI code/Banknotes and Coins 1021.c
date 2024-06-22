#include<stdio.h>
int main()
{
float n,a,b,c,d,e,f;
scanf("%f",&n);
a = (n/100);
b = ((n%100)/50);
c = (((n%100)%50)/20);
d = ((((n%100)%50)%20)/10);
e = (((((n%100)%50)%20)%10)/5);
f = ((((((n%100)%50)%20)%10)%5)/2);
printf("%f nota(s) de R$ 100.00\n",a);
printf("%f nota(s) de R$ 50.00\n",b);
printf("%f nota(s) de R$ 20.00\n",c);
printf("%f nota(s) de R$ 10.00\n",d);
printf("%f nota(s) de R$ 5.00\n",e);
printf("%f nota(s) de R$ 2.00\n",f);

return 0;
}
