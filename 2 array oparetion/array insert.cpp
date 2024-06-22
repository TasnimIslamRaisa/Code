#include<iostream>
using namespace std;
int arrayinsert(int a[],int e,int pos,int  num){
	
	for(int i=e-1;i>=pos;i--){
		a[i+1]=a[i];
	}
	a[pos]=num;		
	e=e+1;
	return e;	
}
int main()
{
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
	int a[]={1,2,3,5,8,9};
	int e=sizeof(a)/sizeof(a[0]);
	int num =4;
	int pos=3;	
	int m=arrayinsert(a,e,pos,num);
	cout<<"After insert :";
	for(int i=0;i<m;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
