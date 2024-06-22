#include <stdio.h>
int main() {
    int a,b,c;
    FILE *fr=fopen("file.c","r");
    //fr=fopen("file.txt","r");
    fscanf(fr,"%d%d%d",&a,&b,&c);
   // fclose(fr);
    if(fr==0){
        printf("Not there\n");
    }
    else
    printf("%d",a+b+c);
    return 0;
}
