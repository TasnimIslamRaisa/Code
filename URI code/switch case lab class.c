#include<stdio.h>

int main()

{
    int a,b,sum,sub,mul,div,mod;
    char op;
    printf("Enter the operator :");
    scanf("%c",&op);
    printf("Enter the numbers :");
    scanf("%d%d",&a,&b);
    switch(op)
    {
    case'+':
        sum=a+b;
        printf("%d",sum);
        break;
    case'-' :
        sub=a-b;
        printf("%d",sub);
        break;
    case'*':
        mul=a*b;
        printf("%d",mul);
        break;
    case'/' :
        div=a/b;
        printf("%d",&div);
        break;
    case'%' :
        mod=a%b;
        printf("%d",&mod);
        break;
    default :
        printf("error!");

    }
        return 0;
}

