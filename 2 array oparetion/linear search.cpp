#include<iostream>
using namespace std;
int arrayls(int a[],int e,int num){
	int loc=0;
	a[e]=num;
	for(loc=0;loc<=e;loc++){
		if(a[loc]==num)
			return loc;
	}
}
int main(){
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    int a[]={60,30,55,20,15,5,9,0,99};
    int e=sizeof(a)/sizeof(a[0]);
    int num=5;
    int loc=arrayls(a,e,num);
    if(loc==e)
    	cout<<"Not found!"<<endl;
    else
    	cout<<"Number found at index "<<loc<<endl;
}