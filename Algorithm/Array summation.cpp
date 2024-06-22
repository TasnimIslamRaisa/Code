#include<iostream>
using namespace std;
int main()
{
    int n,a[100],sum=0;
    cout<<"Enter the size of Array : ";
    cin>>n;
    cout<<"Enter the Elements of array : " ;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"The summation is : "<<sum<<endl;

}
