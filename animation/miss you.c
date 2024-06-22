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
        gotoxy(6,i);
        printf("*");
        fflush(stdout);    //line
        Sleep(t);
    }
for(int i=5;i<=9;i++){
        gotoxy(1+i,i);
        printf("*");
        fflush(stdout);    //cross
        Sleep(t);
    }
for(int i=0;i<=4;i++){
        gotoxy(15-i,5+i);
        printf("*");
        fflush(stdout);    // cross/
        Sleep(t);
    }
 for(int i=5;i<=16;i++){
        gotoxy(15,i);
        printf("*");
        fflush(stdout);    //line
        Sleep(t);
    }
for(int i=5;i<=16;i++){
        gotoxy(19,i);
        printf("*");
        fflush(stdout);//line-line er jnno function er value change korte hoi
        Sleep(t);
    }
for(int i=5;i<=11;i++){
        gotoxy(23,i);
        printf("*");
        fflush(stdout);//line
        Sleep(t);
    }
 for(int i=24;i<=28;i++){
        gotoxy(i,5);
        printf("*");
        fflush(stdout);  //paralal
        Sleep(t);
    }
for(int i=24;i<=28;i++){
        gotoxy(i,11);
        printf("*");
        fflush(stdout);  //paralal
        Sleep(t);
    }
for(int i=11;i<=16;i++){
        gotoxy(28,i);
        printf("*");
        fflush(stdout);//line
        Sleep(t);
    }
 for(int i=23;i<=28;i++){
        gotoxy(i,16);
        printf("*");
        fflush(stdout);  //paralal
        Sleep(t);
    }
for(int i=5;i<=11;i++){
        gotoxy(32,i);
        printf("*");
        fflush(stdout);//line
        Sleep(t);
    }
 for(int i=32;i<=37;i++){
        gotoxy(i,5);
        printf("*");
        fflush(stdout);  //paralal
        Sleep(t);
    }
for(int i=32;i<=37;i++){
        gotoxy(i,11);
        printf("*");
        fflush(stdout);  //paralal
        Sleep(t);
    }
 for(int i=11;i<=15;i++){
        gotoxy(37,i);
        printf("*");
        fflush(stdout);//line
        Sleep(t);
    }
 for(int i=32;i<=37;i++){
        gotoxy(i,16);
        printf("*");
        fflush(stdout);  //paralal
        Sleep(t);
    }
  for(int i=41;i<=47;i++){
        gotoxy(1+i,i-36);
        printf("*");
        fflush(stdout);    // cross\
        Sleep(t);
    }
for(int i=0;i<=6;i++){
        gotoxy(54-i,5+i);
        printf("*");
        fflush(stdout);    // cross/
        Sleep(t);
    }
for(int i=12;i<=16;i++){
        gotoxy(48,i);
        printf("*");
        fflush(stdout);//line
        Sleep(t);
    }
  for(int i=5;i<=16;i++){
        gotoxy(58,i);
        printf("*");
        fflush(stdout);    //line
        Sleep(t);
    }
 for(int i=58;i<=63;i++){
        gotoxy(i,5);
        printf("*");
        fflush(stdout);  //paralal
        Sleep(t);
    }
for(int i=58;i<=63;i++){
        gotoxy(i,16);
        printf("*");
        fflush(stdout);  //paralal
        Sleep(t);
    }
for(int i=5;i<=16;i++){
        gotoxy(64,i);
        printf("*");
        fflush(stdout);    //line
        Sleep(t);
    }
  for(int i=5;i<=16;i++){
        gotoxy(68,i);
        printf("*");
        fflush(stdout);    //line
        Sleep(t);
    }
  for(int i=69;i<=74;i++){
        gotoxy(i,16);
        printf("*");
        fflush(stdout);  //paralal
        Sleep(t);
    }
   for(int i=5;i<=16;i++){
        gotoxy(74,i);
        printf("*");
        fflush(stdout);    //line
        Sleep(t);
    }
  getchar();
    return 0;
}
