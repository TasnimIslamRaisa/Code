#include<iostream>
#include<cstring>
using namespace std;
int indexing(string a,string b)
{
    int i,j,l1,l2,index=-1;
    l1=a.size();
    l2=b.size();
    for(i=0;i<=l1-l2;i++){
        for(j=0;j<l2;j++){
            if(a[i+j]!=b[j])
                break;
        }
        if(l2==j)
            index=i;
    }
    return index;
}
string substring(string a,int pos,int len){
      string sub="";
      int i,j=0;
      for(i=pos;i<pos+len;i++){               //john cena
        sub=sub+a[i];                         // 2  4
        j++;                                  // ab
      }                                       // joena
      return sub;
}
string insertt(string a,int pos,string pat)
{
    string m=substring(a,0,pos);
    m=m+pat;
    string n=substring(a,pos,a.size()-pos);
    m=m+n;
    return m;
}
string deletion(string a,int pos,int len)
{
    string ab=substring(a,0,pos);
    string bc=substring(a,pos+len,a.size-pos-len);
    bc=ab+bc;
    return bc;
}
int main()
{
    int pos,len;
    string a,b;
    string pat="ab";
    getline(cin,a);
    getline(cin,b);
    int c=indexing(a,b);
    if(c==-1)
        cout<<"Pattern not matched"<<endl;
    else
        cout<<"Pattern matched at index "<<c<<endl;

    cout<<"Enter position & length : ";
    cin>>pos>>len;
    string s=substring(a,pos,len);
    cout<<"Sub string = "<<s<<endl;
    string r=insertt(a,pos,pat);
    cout<<"After insertation = "<<r<<endl;
    string d=deletion(a,pos,len);
    cout<<"After delete = "<<d<<endl;
    return 0;
}
