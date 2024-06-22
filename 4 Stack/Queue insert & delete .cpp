// Queue insert & delete 
#include<iostream>
using namespace std;
class queue{
    public:
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(queue *q){
    if(q->f == -1 && q->r ==-1)
    return 1;
    else
    return 0;
}
int isfull(queue *q){
    if(q->r==q->size-1){
        return 1;
    }
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
void deq(queue *q){
    int a=-1;
    if(isempty(q))
    cout<<"Queue underflow!"<<endl;
    else{
        q->f++;
        a=q->arr[q->f];
    }
    cout<<"Dequeuing element :"<<a<<endl;
}
int main(){
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    queue *q=new queue;
    q->size=4;
    q->f=-1;
    q->r=-1;
    q->arr=new int;
    enq(q,12);
    enq(q,132);
    enq(q,2);
    enq(q,1);
    print(q);
    deq(q);
    deq(q);  
    print(q);  
    return 0;
}