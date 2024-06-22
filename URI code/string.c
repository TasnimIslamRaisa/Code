#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],t[20];
    int min=0,i,count1=0,count2=0;
    gets(s);
    gets(t);
    count1=strlen(s);
    count2=strlen(t);
    for(i=0;s[i]!='0';i++){
    if(min<count1)
      min=s[20];
    else
        min=t[20];
    }
   printf("%s",min);
    return 0;
}
