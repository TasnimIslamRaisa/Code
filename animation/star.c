#include <stdio.h>
#include<windows.h>
void gotoxy(int x, int y){
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);} // Sleep(sometime_in_millisecs);
int main() {
    int t=25;
     for(int i=35;i<=65;i++){
        gotoxy(i,11);
        printf("*");
        fflush(stdout);   //peralal
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
 for(int i=0;i<=15;i++){
        gotoxy(65-i,11+i);
        printf("*");
        fflush(stdout);    // cross/
        Sleep(t);
    }
for(int i=35;i<=49;i++){
        gotoxy(0+i,i-24);
        printf("*");
        fflush(stdout);    //cross
        Sleep(t);
    }
  for(int i=66;i<=80;i++){
        gotoxy(0+i,i-54);
        printf("*");
        fflush(stdout);    //cross
        Sleep(t);
    }
    for(int i=50;i<=80;i++){
        gotoxy(i,26);
        printf("*");
        fflush(stdout);   //peralal
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
  for(int i=0;i<=15;i++){
        gotoxy(35-i,11+i);
        printf("*");
        fflush(stdout);    // cross/
        Sleep(t);
    }
for(int i=21;i<=50;i++){
        gotoxy(i,26);
        printf("*");
        fflush(stdout);   //peralal
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
  getchar();
    return 0;
}
