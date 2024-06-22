//postfix to infix with string
#include<iostream>
#include<string>
using namespace std;
int stack[100],size=100,top=-1;
int push(int item){
    if(top>=size-1){
        cout<<"Stack over flow!"<<endl;
    }
    else{
        top++;
        stack[top]=item;
    }
    //cout<<"Pushed "<<item<<" in the stack"<<endl;
    return top;
}
int pop(){
    if(top<=-1)
    cout<<"Stack under flow!"<<endl;
    else{
        int num=stack[top];
        top--;
        //cout<<"Poped "<<num<<" from the stack"<<endl;
        return top;
    }
}
void display(){
    if(top>=0){
        //cout<<"Stack elements are : ";
        for(int i=0;i<=top;i++){
            cout<<stack[i]<<" ";
        }
    }
     cout<<endl;
}
int postfixToInfix(string postfix){
    int n=postfix.size();
    int x,y;
    for(int i=0;i<n;i++){
        if(postfix[i]==' '){
            continue;
        }
        else if(postfix[i]=='+'){
            y=stack[top];
            top=pop();
            x=stack[top];
            top=pop();
            top=push(x+y);
            display();
        }
        else if(postfix[i]=='-'){
            y=stack[top];
            top=pop();
            x=stack[top];
            top=pop();
            top=push(x-y);
            display();
        }
        else if(postfix[i]=='*'){
            y=stack[top];
            top=pop();
            x=stack[top];
            top=pop();
            top=push(x*y);
            display();
        }
        else if(postfix[i]=='/'){
            y=stack[top];
            top=pop();
            x=stack[top];
            top=pop();
            top=push(x/y);
            display();
        }
        else{
            x=postfix[i]-'0';
            top=push(x);
            display();
        }
    }
    return stack[top];
}
int main(){
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);

    string postfix;
    int r;
    cout<<"Enter an postfix expression : ";
    getline(cin,postfix);
    // 562+*124/-
    r=postfixToInfix(postfix);
    cout<<"Result : "<<r<<endl;
}