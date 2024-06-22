#include<stdio.h>
main()
{
 int N,x,y,z,m,n,o,p;
 scanf("%d",&N);
 printf("%d\n",N);
 x = (N/100);
 y = ((N%100)/50);
 z = (((N%100)%50)/20);
 m = ((((N%100)%50)%20)/10);
 n = (((((N%100)%50)%20)%10)/5);
 o = ((((((N%100)%50)%20)%10)%5)/2);
 p = (((((((N%100)%50)%20)%10)%5)%2)/1);
 printf("%d nota(s) de R$ 100,00\n",x);
 printf("%d nota(s) de R$ 50,00\n",y);
 printf("%d nota(s) de R$ 20,00\n",z);
 printf("%d nota(s) de R$ 10,00\n",m);
 printf("%d nota(s) de R$ 5,00\n",n);
 printf("%d nota(s) de R$ 2,00\n",o);
 printf("%d nota(s) de R$ 1,00\n",p);
 return 0;
}
