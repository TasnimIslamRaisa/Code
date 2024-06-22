# include<iostream>
using namespace std;
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
int main()
{
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    int a[]={2,5,8,15,56,190};
    int e=sizeof(a)/sizeof(a[0]);
    int num=15;
    int s=binarysearch(a,e,num);
    if(s!=-1)
    	cout<<"Number found at index "<<s<<endl;
    else
    	cout<<"Number not found!"<<endl;
}