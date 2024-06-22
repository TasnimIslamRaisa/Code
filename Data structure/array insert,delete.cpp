#include<iostream>
using namespace std;
void arrayinsert(int a[],int e,int pos,int num)
{
    int i;
    for(i=e-1;i>=pos;i--)
        a[i+1]=a[i];
        a[pos]=num;
        e=e+1;
    cout<<"New array after insertion :";
    for(i=0;i<e;i++){
        cout<<" "<<a[i]<<" ";
    }
    cout<<endl;
}
void arraydlt(int a[],int e,int pos)
{
    int i;
    for(i=pos;i<e-1;i++){
       a[i]=a[i+1];
       }
       e=e-1;
    cout<<"New array after delete :";
    for(i=0;i<e;i++){
        cout<<" "<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[]={10,11,13,14,15};
    int pos,element,num,element1;
    element=sizeof(a)/sizeof(a[0]);
    cout<<"Enter position & a number : ";
    cin>>pos>>num;
    arrayinsert(a,element,pos,num);
    int b[]={10,11,13,14,15};
    element1=sizeof(b)/sizeof(b[0]);
    arraydlt(b,element1,pos);
    return 0;
}
