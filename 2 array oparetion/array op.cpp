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
int arraydlt(int a[],int e,int pos){
	for(int i=pos-1;i<=e;i++){
		a[i]=a[i+1];		
	}
	e=e-1;	
	return e;
}
int linearsearch(int a[],int e,int num){
	int loc=0;
	a[e]=num;
	for(loc=0;loc<=e;loc++){
		if(a[loc]==num)
			return loc;
	}
}
void bubblesort(int a[],int e){
	int i,j,temp;
	for(i=0;i<e-1;i++){
		for(j=0;j<e-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Sorted array : ";
	for(i=0;i<e;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int binarysearch(int a[],int e,int num){
	int low=0,mid,high=e-1;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==num)
			return mid;
		if(a[mid]<num)
			low=mid+1;
		else
			high=mid-1;
		}
		return -1;
} 
int main(){
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
	int a[]={1,7,13,45,3,6,9};
	int e= sizeof(a)/sizeof(a[0]);
	int pos=4,num=15;
	int m=arrayinsert(a,e,pos,num);
	cout<<"After insert :";
	for(int i=0;i<m;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int n=arraydlt(a,e,pos);
	cout<<"After delete : ";
	for(int i=0;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int loc=linearsearch(a,e,3);
	if(loc==e)
		cout<<"Number not found!";
	else
		cout<<"Number found at index "<<loc<<endl;
	bubblesort(a,e);
	int bs=binarysearch(a,e,13);
	if(bs!=-1)
		cout<<"Number found at index "<<bs<<endl;
	else
		cout<<"Number not found!"<<endl;

}