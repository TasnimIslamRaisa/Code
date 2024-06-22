#include <iostream>
using namespace std;
class stack{
  public:
  int size;
  int top;
  char *arr;
};
int stacktop(stack *sp){
    return sp->arr[sp->top];
}
int isempty(stack *sp){
    if(sp->top == -1)
    return 1;
    else
    return 0;
}
int isfull(stack *sp){
    if(sp->top == sp->size-1)
    return 1;
    else
    return 0;
}
void push(stack *sp,char val){
    if(isfull(sp))
    cout<<"cant push";
    else{
        sp->top++;
        sp->arr[sp->top]=val;
        cout<<"Pushed "<<sp->arr[sp->top]<<endl;
    }
}
int pop(stack *sp){
    if(isempty(sp))
    return -1;
    else{
        int val=sp->arr[sp->top];
        sp->top--;
        cout<<"poped "<<val<<endl;
        return val;
    }
}
int isop(char ch){
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^' || ch=='(' || ch==')')
    return 1;
    else
    return 0;
}

void postfixToInfix(string postfix){
    stack *sp=new stack;
    sp->size=10;
    sp->top=-1;
    sp->arr=new char;
    int i;
    for(i=0;i<postfix.size();i++){
        if(!isop(postfix[i])){
            push(sp,postfix[i]);
        }
        else if(isop(postfix[i])){
            if(isop(postfix[i])=='+'){
                int a=pop(sp);                
                int b=pop(sp);                
                int sum=a+b;
                cout<<sum<<endl; 
                push(sp,sum);                
            }
            if(isop(postfix[i])=='-'){
                int c=postfix[i]-'0';
                c=pop(sp);
                int d=postfix[i]-'0';
                d=pop(sp);
                int sub=c-d;
                cout<<sub<<endl; 
                push(sp,sub);
            }
            if(isop(postfix[i])=='*'){
                int e=postfix[i]-'0';
                e=pop(sp);
                int f=postfix[i]-'0';
                f=pop(sp);
                int mul=e*f;
                cout<<mul<<endl; 
                push(sp,mul);
            }
            if(isop(postfix[i])=='/'){
                int g=postfix[i]-'0';
                g=pop(sp);
                int h=postfix[i]-'0';
                h=pop(sp);
                int div=g/h;
                cout<<div<<endl; 
                push(sp,div);
            }
        }
    }
}
int main() {
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    
    string postfix;
    getline(cin,postfix);
    postfixToInfix(postfix);
    return 0;
}