#include<stdio.h>
main()
{
 int a,b,c,d,h,m,D;
 scanf("%d%d%d%d",&a,&b,&c,&d);
 D = ((c*60)+d)-((a*60)+b);
 if(D>0)
 {
  h = D/60;
 m = D%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
 }
else
  {
      D = (24*60)+D;
      h = D/60;
      m = D%60;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m) ;
  }
  return 0;
}
