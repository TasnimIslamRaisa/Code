//Double ended queue 
#include <iostream>
using namespace std;
class queue{
    public:
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(queue *q){
    if(q->f==-1 && q->r==-1)
    return 1;
    return 0;
}
int isfull(queue *q){
    if(q->r==q->size-1)
    return 1;
    return 0;
}
void print(queue *s){
    int i;
    if(!isempty(s)){
       cout<<"Queue : ";
    for(i=s->f+1;i<=s->r;i++){
        cout<<s->arr[i]<<" ";
    }
}
    else{
        cout<<"The queue is empty"<<endl;
    }         
    cout<<endl;
}
void enq(queue *q,int data){
    if(isfull(q))
    cout<<"Queue is Overflow!"<<endl;
    else{
       q->r++;
       q->arr[q->r]=data;
       cout<<"Enqued element : "<<data<<endl;
    }
}
void insertfornt(queue *q,int data){
    q->f--;
    q->arr[q->f]=data;
    cout<<"Enqued element in front : "<<data<<endl;
}
void deleteRear(queue *q){
    int a=-1;
    a=q->arr[q->r];
    q->r--;
    cout<<"Dequed element from rear : "<<a<<endl;
}
int main() {    
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    queue *q=new queue;
    q->size=15;
    q->f=-1;q->r=-1;
    q->arr=new int;
    enq(q,12);
    enq(q,15);
    enq(q,25);
    enq(q,35);
    enq(q,45);
    print(q);
    insertfornt(q,9);
    insertfornt(q,5);
    deleteRear(q);
    print(q);    
    return 0;
}