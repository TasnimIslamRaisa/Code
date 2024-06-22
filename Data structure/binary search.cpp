#include<iostream>
using namespace std;
int s(int a[],int e,int num){
	int low=0,mid,high=e-1;
	for(int i=low;i<=high; ){
		mid=(low+high)/2;
		if(a[mid]==num){
			return mid;
		}
		if(a[mid]<num){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}
int main()
{
    int a[]={1,3,9,10,15};
    int element=sizeof(a)/sizeof(a[0]);
    int num=3;
    int s1=s(a,element,num);
    if(s1!=-1)
    	cout<<"Number found at index "<<s1<<endl;
    else
    	cout<<"Not found"<<endl;
	return 0;
}
