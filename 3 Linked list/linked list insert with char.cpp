// linked list insert with char
#include <iostream>
using namespace std;
class node{
public:
    char ch;
    class node *next;
};
void p(class node *head){
    while(head!=NULL){
        cout<<head->ch<<" ";
        head=head->next;
    }    
} 
// Case 1: 
class node *insetat1st(class node *head,int ch){
    class node *ptr=new node;
    ptr->ch=ch;
    ptr->next=head;
    head=ptr;
    return head;
}
// Case 2: in between
class node *insertbetween(class node *head,int ch,int index){
    class node *ptr=new node;
    class node *p=head;
    int i=0;
    ptr->ch=ch;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;    
}
// Case 3:
class node *insertlast(class node *head,int ch){
    class node *ptr=new node;
    class node *p=head;
    ptr->ch=ch;
    while(p->next!=NULL){
        p=p->next;
    } 
    p->next=ptr;
    ptr->next=NULL;    
    return head;
}
// Case 4: insert after a specific node.
class node *insertnode(class node *head,class node *pn,int ch){
    class node *ptr= new node;
    ptr->ch=ch;
    ptr->next=pn->next;
    pn->next=ptr;
    return head;
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
    head->ch='a';
    head->next=n2;
    n2->ch='b';
    n2->next=n3;
    n3->ch='c';
    n3->next=n4;
    n4->ch='d';
    n4->next=NULL;
    cout<<"Linked list: ";
    p(head);
    head=insetat1st(head,'y');
    cout<<endl<<"Inset at the beginning : ";
    p(head);
    head=insertbetween(head,'m',2);
    cout<<endl<<"Inset at index 2 : ";
    p(head);
    head=insertlast(head,'n');
    cout<<endl<<"Inset at last : ";
    p(head);
    head=insertnode(head,n2,'o');
    cout<<endl<<"Inset after 3rd node : ";
    p(head);
    return 0;
}