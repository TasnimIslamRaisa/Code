#include<stdio.h>
main()
{
  float A,B,MEDIA;
  scanf("%f%f",&A,&B);
  A=(A*3.5);
  B=(B*7.5);
  MEDIA = (A+B)/(3.5+7.5);
  printf("MEDIA = %.5f\n",MEDIA);

 return 0;
}
