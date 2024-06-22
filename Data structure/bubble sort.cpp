#include <iostream>
using namespace std;
void sort(int a[],int e){
    int i,j,temp;
    for(i=0;i<e-1;i++){
        for(j=0;j<e-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j] =a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main() {
    int a[]={60,50,40,30,20,10};
    int element=sizeof(a)/sizeof(a[0]);
    sort(a,element);
    cout<<"After sorting : ";
     for(int i=0;i<element;i++){
        cout<<a[i]<<" ";
        }
    return 0;
}
