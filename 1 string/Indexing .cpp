#include<iostream>
using namespace std;
int indexing(string a,string b){
	int l1,l2,i,j,index=-1;
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
string substring(string a,int pos,int len){
	string sub="";
	int i;
	for(i=pos;i<pos+len;i++){
		sub=sub+a[i];		
	}
	return sub;
}
string inserting(string a,int pos,string b){
	string m,n;
	m=substring(a,0,pos);              //jo
	m=m+b;                             //joab
	n=substring(a,pos,a.size()-pos);   //hn cena
	m=m+n;
	return m;
}
string deletion(string a,int pos,int len){
	string m,n;
	m=substring(a,0,pos);
	n=substring(a,pos+len,a.size()-pos-len);
	m=m+n;
	return m;
} 
string deletemany(string a,string b){
	int k=indexing(a,b);
	string m=a;
	while(k!=-1){
		m=deletion(m,k,b.size());
		k=indexing(m,b);
	}
	return m;
}
string replace(string a,string b,string c){
	int k=indexing(a,b);
	string m,n;
	if(k!=-1){
		m=deletion(a,k,b.size());
		n=inserting(m,k,c);
		return n;
	}
	else 
 	 return a;
}
string replacemany(string a,string b,string c){
	int k=indexing(a,b);
	string m=a;
	while(k!=-1){
		m=replace(m,b,c);
		k=indexing(m,b);
	}
	return m;
}
string rotation(string a,int pos){
	string m,n;
	m=substring(a,pos,a.size()-pos);
	n=substring(a,0,pos);
	m=m+n;
	return m;
}
int main(){
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    string s,w,d,d1,r,rm,ro;
    string a="John cena";
    string b="cena";
    int in;    
    in=indexing(a,b);
    if(in==-1)
    	cout<<"pattern not found"<<endl;
    else
    	cout<<"pattern found at index  "<<in<<endl;    
    s=substring(a,1,3);
    cout<<"Sub string = "<<s<<endl;
     w=inserting(a,2,"ab");
     cout<<"After insertion = "<<w<<endl;
     d=deletion(a,2,4);
     cout<<"After delete = "<<d<<endl;
     d1=deletemany("abcdabeabgab","ab");
     cout<<"After deletemany = "<<d1<<endl;
     r=replace(a,b,"ab");
     cout<<"After replace = "<<r<<endl;
     rm=replacemany("abcabeabgabeab","ab","yy");
     cout<<"Replace many = "<<rm<<endl;
     ro=rotation(a,3);
     cout<<"After rotation = "<<ro<<endl; 
}