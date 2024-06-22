#include<stdio.h>
int main()
{
    int i,n,j,x,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            sum=0;
        scanf("%d",&x);
      for(j=1;i<=x/2;j++){
        if(x%j==0)
            sum=sum+j;
      }
      if(sum==x)
        printf("%d eh perfeito\n",x);
      else printf("%d nao eh perfeito\n",x);
          }
    return 0;
}
