// Circular Queue insert & delete 
#include<iostream>
using namespace std;
class cqueue{
    public:
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(cqueue *q){
    if(q->f == q->r == -1)
    return 1;
    else
    return 0;
}
int isfull(cqueue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}
void print(cqueue *s){
    int i;
    if(!isempty(s)){
       cout<<"Circular Queue : ";
    for(i=s->f+1;i<=s->r;i++){
        cout<<s->arr[i]<<" ";
    }
}
    else{
        cout<<"The queue is empty"<<endl;
    }         
    cout<<endl;
}
void c_enq(cqueue *q,int data){
    if(isfull(q))
    cout<<"Queue is Overflow!"<<endl;
    else{
       q->r=(q->r+1)%q->size;
       q->arr[q->r]=data;
       cout<<"Enqued element : "<<data<<endl;
    }
}
void c_deq(cqueue *q){
    int a=-1;
    if(isempty(q))
    cout<<"Queue underflow!"<<endl;
    else{
        q->f=(q->f+1)% q->size;
        a=q->arr[q->f];
    }
    if(a!=-1)
    cout<<"Dequeuing element :"<<a<<endl;
}
int main(){  
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    cqueue *q=new cqueue;
    q->size=5;
    q->f=q->r=-1;
    q->arr=new int;
    c_enq(q,1);
    c_enq(q,3);
    c_enq(q,5);
    c_enq(q,2);
    c_enq(q,21);
    print(q);
    c_deq(q);
    c_deq(q);
    c_deq(q);
    c_deq(q);
    c_deq(q);
    print(q);
    return 0;
}