//index,sub string,insert,delete,replace,rotation with string
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
      for(i=pos;i<pos+len;i++){
        sub=sub+a[i];
        j++;
      }
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
    string bc=substring(a,pos+len,a.size()-pos-len);
    bc=ab+bc;
    return bc;
}
string rotation(string a,int pos){
   string q=substring(a,pos,a.size()-pos);
   string r=substring(a,0,pos);
   q=q+r;
   return q;
}
string replace(string a,string b,string pat){
    int k=indexing(a,b);
    string m,n;
    if(k!=-1){
        m=deletion(a,k,b.size());
        n=insertt(m,k,pat);
    }
    return n;
}
void replacemany(string a,string b,string c)
{
    string n,m=replace(a,b,c);  //abcdabefabghmn
    int index=indexing(m,b);  // 8
    if(index==0){
        n=replace(m,b,c);
        cout<<n;
    }
    while(index--){
        string o=replace(m,b,c);
        index=indexing(o,b);
        if(index==-1){
            cout<<o;
        }
        if(index==0){
            string w=replace(o,b,c);
            cout<<w;
        }
        else
            m=replace(o,b,c);

    }
}
void replacemany(string a,string b,string c)
{
    string
}

int main()
{
//    int pos,len;
//    string a,b;
//    string pat="ab";
//    getline(cin,a);
//    getline(cin,b);
//    int c=indexing(a,b);
//    if(c==-1)
//        cout<<"Pattern not matched"<<endl;
//    else
//        cout<<"Pattern matched at index "<<c<<endl;
//    cout<<"Enter position & length : ";
//    cin>>pos>>len;
//    string s=substring(a,pos,len);
//    cout<<"Sub string = "<<s<<endl;
//    string r=insertt(a,pos,pat);
//    cout<<"After insertation = "<<r<<endl;
//    string d=deletion(a,pos,len);
//    cout<<"After delete = "<<d<<endl;
//    string qr=rotation(a,pos);
//    cout<<"After rotation = "<<qr<<endl;
//    string mn=replace(a,b,pat);
//    cout<<"After replaceing= "<<mn<<endl;
      cout<<"Replace many : ";
      replacemany("abcabdabeabfaabgabhabxaiabds","ab","mn");
    return 0;
}
