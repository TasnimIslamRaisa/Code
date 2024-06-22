#include<stdio.h>
main()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    switch(a)
    {
    case 90 ... 100:
        printf("A");
        break;
    case 80 ... 89:
        printf("B");
        break;
    case 70 ... 79:
        printf("C");
        break;
    case 60 ... 69:
        printf("D");
        break;
    case 50 ... 59:
        printf("E");
        break;
    default :
        printf("F");
        break;
    }

    return 0;
}
