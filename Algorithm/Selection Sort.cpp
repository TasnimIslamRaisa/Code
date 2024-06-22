// Selection sort
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
    int minIndex,temp;
    for(int i=0;i<n-1;i++){
        minIndex=i;
        for(int j=i+1;j<=n-1;j++){
            if(a[minIndex]>a[j]){
                minIndex=j;
            }
        }
        temp=a[i];
        a[i]=a[minIndex];
        a[minIndex]=temp;
    }
    cout<<"New Array : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
