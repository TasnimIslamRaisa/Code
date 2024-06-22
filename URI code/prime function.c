#include <stdio.h>
long long prime(long long x){
    if(x==1)
        return 0;
    int i,f=0;
    for(i=2;i<x-1;i++){
       if(x%i==0)
        return 0;
       }
      return 1;
}
int main() {
    long long i,n;
    long long a;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
   scanf("%lld",&a);
    }
  for(int j=0;j<n;j++){
    /*  if(a==1){
      printf("YES\n");
      continue;
        }*/
    if(prime(a)==1){
     printf("YES\n");}
   else if(prime(a)==0)
     printf("NO\n");
 //}
  }
}

