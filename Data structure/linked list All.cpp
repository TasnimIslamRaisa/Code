// linked list : traversal with user define function,print & search
#include <iostream>
using namespace std;
class node{
public:
    int data;
    class node *next;
}*head;
void makeList(int n){
    class node *fnode,*temp;
    head=new node;
    int data,i;
    head=new node;
    cout<<"Enter the data for node 1 : ";
    cin>>data;
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=2;i<=n;i++){
        fnode=new node;
        cout<<"Enter the data for node "<<i<<" : ";
        cin>>data;
        fnode->data=data;
        fnode->next=NULL;
        temp->next=fnode;
        temp=temp->next;
        }
}
void print(){
    //class node *head;
    class node *temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int search(int data)
{
    class node *loc=head;
    int i=-1,f=0;
    if(loc!=NULL)
    {
        while(loc!=NULL)
        {
            i++;
            if(loc->data==data)
            {
                f++;
                break;
            }
            loc=loc->next;
        }
        if(f==1)
        {
            return i;
        }
        else
            return -1;
    }
}
int main()
{
    int n,data,num;
    cout<<"Enter the number of nodes : ";
    cin>>n;
    makeList(n);
    cout<<endl<<"Linked list: ";
    print();
    cout<<endl<<"Enter element you want to search: ";
    cin>>num;
    int s=search(num);
    if(s!=-1)
        cout<<"Number found at index "<<s<<endl;
    else
        cout<<"Number not found!"<<endl;
    return 0;
}
