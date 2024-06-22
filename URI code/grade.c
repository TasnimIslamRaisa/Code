#include<stdio.h>
int main()
{
 int number;
 printf("Welcome to EDU Office of Exam Controller.\n\n");
 printf("Enter Your Obtained Marks ( 0-100 ): ");
 scanf("%d", &number);
 switch ( number )
 {
 case 93 ... 100:
 printf("\n A Grade \n\nCongratulations...\n");
 break;
 case 89 ... 92:
 printf("\n A- Grade\n\n Congratulations...\n");
 break;
 case 86 ... 88:
 printf("\n B+ Grade\n\n Congratulations...\n");
 break;
 case 82 ... 85:
 printf("\n B Grade\n\n Congratulations...\n");
 break;
 case 79 ... 81:
 printf("\n B- Grade\n\n Congratulations...\n");
 break;
 case 75 ... 78:
 printf("\n C+ Grade\n\n Congratulations...\n");
 break;
 case 72 ... 74:
 printf("\n C Grade\n\n Congratulations...\n");
 break;
 case 69 ... 71:
 printf("\n C- Grade\n\n Congratulations...\n");
 break;
 case 65 ... 68:
 printf("\n D+ Grade\n\n Congratulations...\n");
 break;
 case 60 ... 64:
 printf("\n D Grade\n\n Congratulations...\n");
 break;
 default:
 printf("\n Fail\n\n Better Luck Next Time...\n");
 break;
 }
}
