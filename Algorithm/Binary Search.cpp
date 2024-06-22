// Binary Search
#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int num)
{
    int high=n-1,low=0,mid,f=0;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==num){
            return mid;
        }
        else if(a[mid]<num){
            low=mid+1;
        } else {
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,a[100],num;
    cout<<"Enter the size of Array : ";
    cin>>n;
    cout<<"Enter the Elements of array : " ;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the Number : ";
    cin>>num;
    int bs=binarySearch(a,n,num);
    if(bs!=-1){
        cout<<"Number found at index : "<<bs<<endl;
    } else {
        cout<<"Number not Found!"<<endl;
    }


}

