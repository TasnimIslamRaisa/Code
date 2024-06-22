#include<stdio.h>
int main()
{
    int n,x,i,total,c,r,s;
    float c1,r1,s1;
    char a;
    total=c=r=s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %c",&x,&a);
        total=total+x;
        if(a=='C')
            c=c+x;
        if(a=='R')
           r=r+x;
        if(a=='S')
           s=s+x;
    }
    c1=c*100.0/total;
    r1=r*100.0/total;
    s1=s*100.0/total;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",c1);
    printf("Percentual de ratos: %.2f %%\n",r1);
    printf("Percentual de sapos: %.2f %%\n",s1);
    return 0;
}
