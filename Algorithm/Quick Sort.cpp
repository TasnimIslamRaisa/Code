#include<iostream>
using namespace std;
int partitionn(int a[],int low,int high)
{
    int pivot=a[low];
    int i=low;
    int j=high;
    do{
        while(a[i]<=pivot){
        i++;
    }
    while(a[j]>pivot){
        j--;
    }
    if(i<j){
        swap(a[i],a[j]);
    }
    }while(i<j);
    //swapping pivot and a[j]
    swap(a[low],a[j]);
    return j;

}
void quickSort(int a[],int low,int high)
{
    int partitionIndex;
    if(low<high)
    {
        //index of pivot after partition.
        // returned value j;
        int partitionIndex=partitionn(a,low,high);
        quickSort(a,low,partitionIndex-1); //sort left subarray
        quickSort(a,partitionIndex+1,high); //sort right subarray
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
    quickSort(a,0,n-1);
    cout<<"New Array : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}

