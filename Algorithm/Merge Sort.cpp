#include<iostream>
using namespace std;
void Merge(int a[],int mid,int low,int high)
{
    int i,j,k,b[100];
    i=low,j=mid+1,k=low;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
            k++;
        } else {
            b[k]=a[j];
            j++;
            k++;
        }
        } // end of 1st while loop
        while(i<=mid){
            b[k]=a[i];
            i++;k++;
        }
        while(j<=high){
            b[k]=a[j];
            j++;k++;
        }
        for (int i = low; i <= high; i++){
                a[i] = b[i];
    }
}
void mergeSort(int a[],int low,int high)
{
    if(low<high){
        int mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        Merge(a,mid,low,high);
    }
}
int main()
{
    int n,a[100];
    cout<<"Enter the size of Array : ";
    cin>>n;
    cout<<"Enter the Elements of array : " ;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergeSort(a,0,n-1);
    cout<<"New Array : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}


