//BOOK solved problem 3.1(a,b,c)
#include <iostream>
#include<cstring>
using namespace std;
string substring(string a,int pos,int len){
    string sub="";
    int i,j=0;
    for(i=pos;i<pos+len;i++){
        sub=sub+a[i];
        j++;
    }
    return sub;
}
int main() {
    string a="ABCD";
    string s;
    int l=a.size();    //4
    //cout<<endl;
    cout<<"The length of a = "<<l<<endl<<endl;
    cout<<"List of all substring of a = ";
    for(int i=0;i<=l;i++){    //pos
        for(int j=1;j<=l-i;j++){     //len
          s=substring(a,i,j);
          cout<<s<<" ";
        }
    }
    cout<<endl<<endl;
    cout<<"List of all the initial substring of a = ";
    for(int i=0;i<=l;i++){
        s=substring(a,0,i);
        cout<<s<<" ";
    }
    cout<<endl;
    return 0;
}
