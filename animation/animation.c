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
    for(int i=5;i<=16;i++){
        gotoxy(5,i);
        printf("*");
        fflush(stdout);    //line
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
    for(int i=5;i<=10;i++){
        gotoxy(i,11);
        printf("*");
        fflush(stdout);   //peralal
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
    for(int i=5;i<=16;i++){
        gotoxy(10,i);
        printf("*");
        fflush(stdout);      //line
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
    for(int i=5;i<=16;i++){
        gotoxy(14,i);
        printf("*");
        fflush(stdout);      //line
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
     for(int i=15;i<=18;i++){
        gotoxy(i,11);
        printf("*");
        fflush(stdout);   //peralal
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
for(int i=15;i<=19;i++){
        gotoxy(i,6);
        printf("*");
        fflush(stdout);   //peralal
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
for(int i=15;i<=19;i++){
        gotoxy(i,16);
        printf("*");
        fflush(stdout);   //peralal
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
for(int i=6;i<=16;i++){
        gotoxy(23,i);
        printf("*");
        fflush(stdout);    //line
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
 for(int i=24;i<=28;i++){
        gotoxy(i,16);
        printf("*");
        fflush(stdout);   //peralal
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
 for(int i=6;i<=16;i++){
        gotoxy(32,i);
        printf("*");
        fflush(stdout);    //line
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
for(int i=32;i<=36;i++){
        gotoxy(i,16);
        printf("*");
        fflush(stdout);   //peralal
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
  for(int i=6;i<=16;i++){
        gotoxy(40,i);
        printf("*");
        fflush(stdout);    //line
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
   for(int i=41;i<=45;i++){
        gotoxy(i,16);
        printf("*");
        fflush(stdout);   //peralal
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
for(int i=41;i<=45;i++){
        gotoxy(i,6);
        printf("*");
        fflush(stdout);   //peralal
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
for(int i=6;i<=16;i++){
        gotoxy(46,i);
        printf("*");
        fflush(stdout);    //line
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
 for(int i=6;i<=13;i++){
        gotoxy(52,i);
        printf("*");
        fflush(stdout);    //line
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
  for(int i=16;i<17;i++){
        gotoxy(52,i);
        printf("*");
        fflush(stdout);    //line
        Sleep(t);
        gotoxy(i,5);
        printf(" ");
        fflush(stdout);
    }
    getchar();
    return 0;
}
