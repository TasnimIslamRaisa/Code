#include<stdio.h>
int main()
{

    float n,i=0, sum=0;
    float avr;
    while(1){
        scanf("%f",&n);
        {
            if(n<0)
                break;
        }
        i++;
        sum=sum+n;
        avr=sum/i;

    }
    printf("%.2f",avr);
    return 0;
}
