//Circular linked list
#include<iostream>
using namespace std;
class node{
public:
	int data;
	class node *next;
};
void p(class node *head){
	class node *ptr=head;
	do{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}while(ptr!=head);
}
//insert at 1st;
class node *case1(class node *head,int data){
	class node *ptr=new node;
	ptr->data=data;
	class node *p=head->next;
	while(p->next!=head){
		p=p->next;
	}// At this point p points to the last node of this circular linked list
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}
int main(){
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
	class node *head,*n2,*n3,*n4;
	head=new node;
	n2=new node;
	n3=new node;
	n4=new node;
	head->data=2;
	head->next=n2;
	n2->data=5;
	n2->next=n3;
	n3->data=8;
	n3->next=n4;
	n4->data=9;
	n4->next=head;
	cout<<"Circular linked list: ";
	p(head);	
	cout<<endl<<"Insert at the beginning : ";
	head=case1(head,6);
	p(head);
}