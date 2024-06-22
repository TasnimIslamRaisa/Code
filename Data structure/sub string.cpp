#include<bits/stdc++.h>
//#include<iostream>
//#include<string>
using namespace std;
void substring(char* b,int pos,int len){
    char sub[100];
    int j=0;
    for(int i=pos;i<=pos+len;i++){
        sub[j]=b[i];
        j++;
    }
    sub[len]='\0';
    cout<<sub;
}
int main()
{
    char a[100];
    int pos,len;
    cin.get(a,100);
    cin>>pos;
    cin>>len;
    substring(a,pos,len);
    return 0;
}
