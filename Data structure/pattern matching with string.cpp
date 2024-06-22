#include<iostream>
#include<cstring>
using namespace std;
int match(string a,string b){
 int i,j,l1,l2,index=-1;
 l1=a.size();
 l2=b.size();
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
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int d=match(a,b);
    if(d==-1)
        cout<<"Pattern not matched";
    else
        cout<<"pattern matched at index :"<<d;

    return 0;
}

