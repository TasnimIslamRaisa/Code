#include<iostream>
using namespace std;
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
    int f=0;
    for(int i=0;i<n;i++){
        if(a[i]==num){
            cout<<"Number found at index "<<i<<endl;
            f=1;
        }
    }
    if(f==0)
        cout<<"Number not found"<<endl;
}
