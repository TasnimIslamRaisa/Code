//push ,pop,peek,top most,top bottom using array
#include<iostream>
using namespace std;
class stack{
public:
    int size;
    int top;
    int *a;
};

void display(stack *q){
    int i;
    if(q->top>=0){
        cout<<"Stack elements are : ";
        for(i=q->top;i>=0;i--)
        cout<<q->a[i]<<" ";
        cout<<endl;
    }else 
    cout<<"Stack is empty";
}
int isempty(class stack *s){
    if(s->top==-1)
        return 1;
    else 
        return 0;
}
int isfull(class stack *s){
    if(s->top==s->size-1)
        return 1;
    else
        return 0;
}
void push(class stack *s,int num){
    if(isfull(s))
        cout<<"Sorry!Can not push!"<<endl;
    else{
        s->top++;
        s->a[s->top]=num;        
        cout<<"Pushed "<<s->a[s->top]<<" in the stack!"<<endl;
    }
}
int  pop(class stack *s){
    if(isempty(s))
        cout<<"Sorry!Can't pop!"<<endl;\
    else{
        int num=s->a[s->top];
        s->top--;
        return num;
    }
}
int peek(class stack *s,int i){  //i=position
    if((s->top-i+1)<0)
        cout<<"Not a valid position."<<endl;
    else
        return s->a[s->top-i+1];    
}
int topmost(class stack *s){
    return s->a[s->top];
}
int topbottom(class stack *s){
    return s->a[0];
}
int main(){
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    class stack *s=new stack;
    s->size=4;
    s->top=-1;
    s->a= new int;
    // if(isempty(s))
    //     cout<<"The stack is empty"<<endl;
    // else
    //     cout<<"The stack is not empty"<<endl; 
    // if(isfull(s))
    //     cout<<"The stack is full."<<endl;
    // else
    //     cout<<"The stack is not full."<<endl;
    push(s,2);
    push(s,4);
    push(s,5);
    push(s,7);
    push(s,75);
    display(s);
    // int p=pop(s);
    // cout<<endl<<"poped "<<p<<" from the stack!"<<endl;
    for(int j=1;j<=s->top+1;j++){
        cout<<"The value at position "<<j<<" is "<<peek(s,j)<<endl;
    }
    cout<<"Top most element = "<<topmost(s)<<endl;
    cout<<"Top bottom element = "<<topbottom(s)<<endl;
}