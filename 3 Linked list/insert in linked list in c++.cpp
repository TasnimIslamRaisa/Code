// linked list insert 
#include <iostream>
using namespace std;
class node{
public:
    int data;
    class node *next;
};
void p(class node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }    
} 
// Case 1: 
class node *insetat1st(class node *head,int data){
    class node *ptr=new node;
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    return head;
}
// Case 2: insert  at index 
class node *insertbetween(class node *head,int data,int index){
    class node *ptr=new node;
    class node *p=head;
    int i=0;
    ptr->data=data;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;    
}
// Case 3:
class node *insertlast(class node *head,int data){
    class node *ptr=new node;
    class node *p=head;
    ptr->data=data;
    while(p->next!=NULL){
        p=p->next;
    } 
    p->next=ptr;
    ptr->next=NULL;    
    return head;
}
// Case 4: insert after a specific node.
class node *insertnode(class node *head,class node *pn,int data){
    class node *ptr= new node;
    ptr->data=data;
    ptr->next=pn->next;
    pn->next=ptr;
    return head;
}
//case 5 : insert in a sorted linked list
class node *sortinsert(class node *head,int data){
    class node *ptr=new node;
    ptr->data=data;
    ptr->next=NULL;
    class node *p=head;   //current node point to head 
    while(p->next!=NULL && p->next->data < ptr->data){
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    return  head;
}
//unsorted linked list search 
int unssearch(class node *head,int data){  
    class node *loc=head;
    int i=-1;
    while(loc!=NULL){
        if(loc->data==data){
            return i+1;
        }        
        i++;
        loc=loc->next;
    }
    return -1;
}
//sorted linked list search 
int ssearch(class node *head,int data){  
    class node *loc=head;
    int i=-1;
    while(loc!=NULL ){
    if(loc->data>data || loc->data==data){
        return i+1;
    }
    i++;
    loc=loc->next;
    }
    return -1;
}
int main()
{
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);  
    class node *head,*n2,*n3,*n4;
    head= new node;
    n2= new node;
    n3= new node;
    n4= new node;
    head->data=7;
    head->next=n2;
    n2->data=11;
    n2->next=n3;
    n3->data=14;
    n3->next=n4;
    n4->data=65;
    n4->next=NULL;
    cout<<"Linked list: ";
    p(head);
    head=insetat1st(head,3);
    cout<<endl<<"Inset at the beginning : ";
    p(head);
    head=insertbetween(head,9,2);
    cout<<endl<<"Inset at index 2 : ";
    p(head);
    head=insertlast(head,70);
    cout<<endl<<"Inset at last : ";
    p(head);
    head=insertnode(head,n2,12);
    cout<<endl<<"Inset after 3rd node : ";
    p(head);
    head=sortinsert(head,10);
    cout<<endl<<"Inset in sorted list : ";
    p(head);
    int s=ssearch(head,3);
    if(s==-1)
    cout<<endl<<"Number not found!"<<endl;
    else
        cout<<endl<<"Number found at index "<<s<<endl;
    return 0;
}