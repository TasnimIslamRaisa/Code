#include<iostream>
#include<cstring>
using namespace std;
int match(char *a,char *b){
 int i,j,l1,l2,index=-1;
 l1=strlen(a);
 l2=strlen(b);
 for(i=0;i<=l1-l2;i++){
    for(j=0;j<l2;j++){
        if(a[i+j]!=b[j])
            break;
    }
    if(j==l2)
        index=i;
 }
 return index;
}
int main()
{
    char a[100];  //="john cena";
    char b[100];//="cena";
    cin.get(a,100);
    getchar();
    cin.get(b,100);
    getchar();
    int d=match(a,b);
    if(d==-1)
        cout<<"Pattern not matched";
    else
        cout<<"pattern matched at index :"<<d;

    return 0;
}
