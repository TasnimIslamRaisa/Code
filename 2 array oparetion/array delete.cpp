#include<iostream>
using namespace std;
int arraydlt(int a[],int e,int pos){
	for(int i=pos;i<=e-1;i++){
		a[i]=a[i+1];		
	}
	e=e-1;	
	return e;
}
int main(){
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
	int a[]={1,7,13,45,3,6,9};
	int e= sizeof(a)/sizeof(a[0]);
	int pos=4;
	int n=arraydlt(a,e,pos);
	cout<<"After delete : ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}