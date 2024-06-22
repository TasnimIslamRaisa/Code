#include<iostream>
using namespace std;
void arraysort(int a[],int e){
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
	cout<<"After sorting array : ";
	for(i=0;i<e;i++){
		cout<<a[i]<<" ";
	}
}
int main()
{
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    int a[]={60,30,55,20,15,5,9,0,99};
    int e=sizeof(a)/sizeof(a[0]);
    arraysort(a,e);
}