#include<iostream>
using namespace std;
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
    int pos,element;
    element=sizeof(a)/sizeof(a[0]);
    cout<<"Enter position : ";
    cin>>pos;
    arraydlt(a,element,pos);
    return 0;
}
