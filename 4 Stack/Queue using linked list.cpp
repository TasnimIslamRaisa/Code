// Queue using linked list;
#include <iostream>
using namespace std;
class node *f=NULL;
class node *r=NULL;
class node{
    public:
    int data;
    node *next; 
};
void print(node *ptr){
    while(ptr!=NULL){
        cout<<"Element : "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
void enq(int data){
    node *p=new node;
    if(p==NULL)
    cout<<"Queue is overflow! "<<endl;
    else{
        p->data=data;
        p->next=NULL;
        if(f==NULL){
            f=r=p;
        }
        else{
            r->next=p;
            r=p;
        }
    }
}
int deq(){
    int data=-1;
    node *ptr=f;
    if(f==NULL)
    cout<<"Queue is underflow!"<<endl;
    else{
       f= f->next;
       data=ptr->data;
       free(ptr);
    }
    return data;
}
int main() {
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    enq(2);
    enq(4);
    enq(6);
    enq(7);
    enq(12);
    print(f);
    cout<<"Dequeue element : "<<deq()<<endl;
    cout<<"Dequeue element : "<<deq()<<endl;    
    print(f);
    return 0;
}