#include<iostream>
#include<cstring>
using namespace std;
int indexing(char *a,char *b){
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
void substring(char *a,int pos,int len){
  char sub[100]="";
  int i,j=0;
  for(i=pos;i<pos+len;i++){
    sub[j]=a[i];
    j++;
  }
  cout<<sub;
}
void insertation(char *a,int pos,char *pat){
   substring(a,0,pos);
   cout<<pat;
   substring(a,pos,strlen(a)-pos);
}
void deletion(char *a,int pos,int len){
   substring(a,0,pos);
   substring(a,pos+len,strlen(a)-(pos+len));
}
int main()
{
    char a[100]="john cena";   //text
    char b[100]="cena";        //pattern
    int q=indexing(a,b);
    cout<<"john cena"<<endl;
    if(q==1)
        cout<<"Pattern not matched"<<endl;
    else
        cout<<"Pattern matched at index "<<q<<endl;
    int pos,len;
    cout<<"Enter position & length : ";
    cin>>pos>>len;
    cout<<"sub-string : ";
    substring(a,pos,len);
    cout<<endl;
    char pat[100]="ab";
    cout<<"Insert : ";
    insertation(a,pos,pat);
    cout<<endl;
    cout<<"After delete : ";
    deletion(a,pos,len);
    return 0;
}
