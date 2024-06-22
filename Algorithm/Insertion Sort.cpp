// Insertion sort
#include<iostream>
using namespace std;
int main()
{
    int n,a[100];
    cout<<"Enter the size of Array : ";
    cin>>n;
    cout<<"Enter the Elements of array : " ;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key,j;
    for(int i=1;i<=n-1;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}


