//Doubly linked list :
#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
public:
	int data;
	class node *prev,*next;
};
void p(class node*head){
	class node *ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
int main()
{
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    class node *head,*n2,*n3;
    head=(class node*)malloc(sizeof(class node));
    n2=(class node*)malloc(sizeof(class node));
    n3=(class node*)malloc(sizeof(class node)); 
    head->prev=NULL;
    head->data=7;
    head->next=n2;
    n2->prev=head;
    n2->data=21;
    n2->next=n3;
    n3->prev=n2;
    n3->data=18;
    n3->next=NULL;
    cout<<"Doubly linked list : ";
    p(head);

}