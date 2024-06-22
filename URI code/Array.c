#include<stdio.h>
int main()
{
    long long n,x,i,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        long long fact=1;
        scanf("%lld",&x);

    for(j=1;j<=x;j++)
        fact=j*fact;
        printf("%lld\n",fact);
    }
  return 0;
}
