//array insert
#include<iostream>
using namespace std;
int main()
{
    int n,a[100],loc,num;
    cout<<"Enter the size of Array : ";
    cin>>n;
    cout<<"Enter the Elements of array : " ;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the location & number : ";
    cin>>loc>>num;
    for(int i=n-1;i>=loc;i--){
        a[i+1]=a[i];
    }
    a[loc]=num;
    cout<<"New array : ";
    for(int i=0;i<n+1;i++){
        cout<<a[i]<<" ";
    }
}

