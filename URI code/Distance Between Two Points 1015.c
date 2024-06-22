#include<stdio.h>
#include<math.h>
main()
{
 double x1,y1,Distance;
 double x2,y2;
 scanf("%lf%lf",&x1,&y1);
 scanf("%lf%lf",&x2,&y2);
 Distance = sqrt (pow ((x2-x1), (2))+ pow((y2-y1), (2)));
 printf("%.4lf",Distance);
 return 0;
}
