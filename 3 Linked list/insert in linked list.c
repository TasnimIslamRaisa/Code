//insert in linked list.
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
void print(struct node * head){
	while(head!=NULL){
		printf("%d\n",head->data);
	    head=head->next;
    } 	
}
//case1 = insert at the Beginning 
struct node *case1(struct node *head,int data){
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->next=head;
	head=ptr;
	return head;
}
//case 2 = insert in between any node.
struct node *case2(struct node *head,int data,int index){
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	struct node *p=head;
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
//case 3 = insert at the End.
struct node *case3(struct node*head,int data){
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	struct node *p=head;
	ptr->data=data;
    while(p->next!=NULL){
    	p=p->next;
    }
	p->next=ptr;
	ptr->next=NULL;
	return head; 
}
//case 4 = insert after a specific node. 
struct node *case4(struct node * head,struct node *prvnode,int data){
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	//prvnode=head;
	ptr->data=data;
	ptr->next=prvnode->next;
	prvnode->next=ptr;
	return head;
}
int main()
{
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
	struct node *head,*second,*third;
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	head->data=3;
	head->next=second;
	second->data=7;
	second->next=third;
	third->data=11;
	third->next=NULL;
	printf("Linked list :\n");
	print(head);
	printf("Linked list after insertion :\n");
	head=case1(head,9);
	print(head);
	printf("Insert in between any node:\n");
	head=case2(head,2,3);
	print(head);
	printf("Insert at the end :\n");
	head=case3(head,56);
	print(head);
	printf("Insert after a specific node:\n");
	head=case4(head,second,99);
	print(head);
}