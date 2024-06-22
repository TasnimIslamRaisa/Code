//array deletion
#include<iostream>
using namespace std;
int main()
{
    int n,a[100],loc;
    cout<<"Enter the size of Array : ";
    cin>>n;
    cout<<"Enter the Elements of array : " ;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the location : ";
    cin>>loc;
    for(int i=loc;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"New Array : ";
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
}


