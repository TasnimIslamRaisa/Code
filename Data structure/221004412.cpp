//Doubly linked list :
#include<iostream>
using namespace std;
class node
{
public:
	int data;
	class node *prev,*next;
};
void p(class node *raisa){
	class node *ptr=raisa;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
//INSERT AT HEAD
node *insert1st(node *raisa,int data){
    node *ptr=new node;
    ptr->data=data;
    raisa->prev=ptr;
    ptr->next=raisa;
    raisa=ptr;
    return raisa;
}
//INSERT AT LAST
node *insertlast(node *raisa,int data){
    node *ptr=new node;
    ptr->data=data;
    ptr->next=NULL;
    node *q=raisa;
    while(q->next!=NULL){
        q=q->next;
    }
    q->next=ptr;
    ptr->prev=q;
    return raisa;
}
//INSERT AT INDEX
node *insertatindex(node *raisa,int data,int index){
    node *ptr=new node ;
    ptr->data=data;
    node *p=raisa;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    ptr->prev=p;
    p->next=ptr;
    p->next->prev=ptr;
    cout<<endl<<"Insert at "<<index<<" index : ";
    return raisa;
}
//DELETE AT 1ST
node *dlt1st(node *raisa){
    node *p=raisa;
    raisa=p->next;
    raisa->prev=NULL;
    free(p);
    return raisa;
}
//DELETE AT LAST
node *dltlast(node *raisa){
    node *p=raisa;
    while(p->next!=NULL){
        p=p->next;
    }
    p->prev->next=NULL;
    free(p);
    return raisa;
}
//DELETE WITH NUMBER
node *dltnum(node *raisa,int num){
    node *p=raisa;
    node *q=raisa->next;
    while(q->data!= num && q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	if(q->data==num){
		p->next=q->next;
		q->next->prev=p;
		free(q);
	}
	cout<<endl<<"Delete "<<num<<" from the linked list : ";
	return raisa;
}
int main()
{
    //created node
    class node *raisa,*n2,*n3;
    raisa=new node;
    n2=new node;
    n3=new node;
    raisa->prev=NULL;
    raisa->data=7;
    raisa->next=n2;
    n2->prev=raisa;
    n2->data=21;
    n2->next=n3;
    n3->prev=n2;
    n3->data=18;
    n3->next=NULL;
    cout<<"Doubly linked list : ";
    p(raisa);
    raisa=insert1st(raisa,2);
    cout<<endl<<"Insert at first node : ";
    p(raisa);
    raisa=insertlast(raisa,5);
    cout<<endl<<"Insert at last node : ";
    p(raisa);
    raisa=insertatindex(raisa,15,3);
    p(raisa);
    raisa=dlt1st(raisa);
    cout<<endl<<"Delete 1st node : ";
    p(raisa);
    raisa=dltlast(raisa);
    cout<<endl<<"Delete last node : ";
    p(raisa);
    raisa=dltnum(raisa,15);
    p(raisa);
    cout<<endl;

}
