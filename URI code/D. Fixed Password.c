#include<stdio.h>
int main()
{
    long long m[1000010],i,n,x,size,max,t,test;
    scanf("%lld",&test);
    for(t=1;t<=test;t++){
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&m[i]);
        for(size=1;size<=n;size++){
            for(x=0;x<=n-size;x++){
                max=m[x];
                for(i=x;i<x+size;i++)
                    if(m[i]>max)
                    max=m[i];
                printf("%lld ",max);
            }
        }
        printf("\n");
    }

    return 0;
}
