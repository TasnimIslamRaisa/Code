#include<stdio.h>
int main()
{
    int i,n;
    float a,b,c,sum,avr;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f %f %f",&a,&b,&c);
        sum= a*2.0+b*3.0+c*5.0;
        avr=sum/10.0;
        printf("%.1f\n",avr);
    }

    return 0;

}
