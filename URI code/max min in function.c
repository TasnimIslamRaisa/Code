#include<stdio.h>
void maximum(int a[100],int n){
   int max=a[0];
   for(int i=0;i<n;i++){
      if(a[i]>max)
        max=a[i];
   }
   printf("%d ",max);
}
void minimum(int a[100],int n){
   int min=a[0];
   for(int i=0;i<n;i++){
      if(a[i]<min)
        min=a[i];
   }
   printf("%d ",min);
}
int main()
{
    int n,x[100],max,min;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    minimum(x,n);
    maximum(x,n);
    return 0;
}
