#include<stdio.h>
main()
{
float a,b,c,Perimetro,Area;
scanf("%f%f%f",&a,&b,&c);
if(((a+b)>c) && ((b+c)>a) && ((c+a)>b))
{
Perimetro = (a+b+c);
printf("Perimetro = %.1f\n",Perimetro);
}
else
{
Area = (((a+b)/2)*c);
printf("Area = %.1f\n",Area);
}
return 0;
}
