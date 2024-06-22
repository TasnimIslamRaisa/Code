// Delete in linked list. (5 cases)
#include<iostream>
#include<stdlib.h>
using namespace std;
class node{
public:
	int data;
	class node *next;
};
void p(class node*head){
	while(head!=NULL){
		cout<<head->data<<" ";
	    head=head->next;
	}	
}
// delete the 1st node.
class node *case1(class node *head){
	class node *ptr=(class node *)malloc(sizeof(class node));
	ptr=head;
	head=head->next;
	free(ptr);
	return head;
}
// delete a node with index num.
class node *case2(class node *head,int index){
	class node *p=head;
	class node *q;	
	int i=0;
	while(i!=index-1){
		p=p->next;
		i++;
	}
	q=p->next;
	p->next=q->next;
	free(q);
	return head;
}
// delete at the end
class node *case3(class node *head){
	class node *p;
	class node *q;
	p=head;
	q=head->next;
	while(q->next!=NULL){
		p=p->next;
		q=q->next;
	}	
	p->next=NULL;		
	free(q);
	return head;
}
//delete a specific number
class node *case4(class node *head,int num){
	class node *p=head;
	class node *q=head->next; 
	while(q->data!= num && q->next!=NULL){
		p=p->next;
		q=q->next;		
	}
	if(q->data==num){
		p->next=q->next;
		free(q);
	}
	return head;
}
//delete after a node  
class node *case5(class node *head,class node *pn){
	class node *p;
	p=pn->next;
	pn->next=p->next;
	free(p);
	return head;
}
int main(){
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    class node *head,*second,*third,*fourth,*five,*six;
    head=new node;
    second=new node;
    third=new node;
    fourth=new node;
    five=new node;
    six=new node;
    head->data=8;
    head->next=second;
    second->data=9;
    second->next=third;
    third->data=11;
    third->next=fourth;
    fourth->data=7;
    fourth->next=five;
    five->data=2;
    five->next=six;
    six->data=3;
    six->next=NULL;
    cout<<"Linked list : ";
    p(head);
    cout<<endl;
    head=case1(head);
    cout<<"Delete 1st node : ";
    p(head);
    cout<<endl;
    head=case2(head,1);
    cout<<"Delete a specific index : ";
    p(head);
    cout<<endl;
    head=case3(head);
    cout<<"Delete the end node : ";
    p(head);
    cout<<endl;
    head=case4(head,7);
    cout<<"Deteting a specific value: ";
    p(head);
    cout<<endl;
    head=case5(head,second);
    cout<<"Deteting after a specific node : ";
    p(head);
}