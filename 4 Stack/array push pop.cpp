//push & pop in stack with array
#include<iostream>
#include<string>
using namespace std;
int stack[100]={0},size=100,top=-1;
int push(int item){
    if(top>=size-1){
        cout<<"Stack over flow!"<<endl;
    }
    else{
        top++;
        stack[top]=item;
    }
    cout<<"Pushed "<<item<<" in the stack"<<endl;
    return top;
}
int pop(){
    if(top<=-1)
    cout<<"Stack under flow!"<<endl;
    else{
        int num=stack[top];
        top--;
        cout<<"Poped "<<num<<" from the stack"<<endl;
        return top;
    }
}
void display(){
    if(top>=0){
        cout<<"Stack elements are : ";
        for(int i=0;i<=top;i++){
            cout<<stack[i]<<" ";
        }
    }
     cout<<endl;
}
int main(){
    push(12);
    push(1);
    push(2);
    push(32);
    display();
    pop();
    pop();
    display();
    
}