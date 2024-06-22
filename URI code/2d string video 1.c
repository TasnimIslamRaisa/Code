#include <stdio.h>
#include<string.h>
int main()
{
    char s[100010];
    int l;
    gets(s);
    l=strlen(s);
    for(int i=0;i<l;i++){
        if(s[i]== ','){
            printf(" ");
        }
        else if(s[i]>= 'a' && s[i]<= 'z'){
            int as=s[i]-32;
            char res =as;
            printf("%c",res);
        }
        else {
            int as=s[i]+32;
            char res=as;
            printf("%c",res);
        }
    }
    return 0;
}
