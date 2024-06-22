#include<stdio.h>
main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c)
            printf("%d is the max",a);
        else
            printf("%d is the max",c);
            }
            else{
                if(b>c)
                    printf("%d is the max",b);
                else
                    printf("%d is the max ",c);

            }
    return 0;
}
