#include<stdio.h>
#include<string.h>
char s[250];
int count(int i){
    if(s[i]=='\0'){
        return 0;
    }
    int m=count(i+1);
    if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A' || s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
    m=m+1;
    return m;
}
int main(){
    gets(s);
    printf("%d\n",count(0));
}
