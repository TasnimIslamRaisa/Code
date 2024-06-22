//Infix to postfix
#include <iostream>
#include <stack>
using namespace std;
int precedence(char a){
    if(a=='+' || a=='-')
    return 1;
    if(a=='/' || a=='*')
    return 2;
    if(a=='^')
    return 3;
    else
    return 0;
}
string convert(string infix){
    int i=0;
    string postfix="";
    stack<int>s;
    while(infix[i]!='\0'){
        if(infix[i]>='a' && infix[i]<='z' || infix[i]>='A' && infix[i]<='Z'){
            postfix+=infix[i];
            i++;
        }
        else if(infix[i]=='('){
            s.push(infix[i]);
            i++;
        }
        else if(infix[i]==')'){
            while(s.top()!='('){
              postfix += s.top();
                s.pop();
            }
            s.pop();
            i++;
        }
        else{
            while(!s.empty() && precedence(infix[i])<=precedence(s.top()) ){
                postfix+=s.top();
                s.pop();
            }
            s.push(infix[i]);
            i++;
        }
    }
    while(!s.empty()){
        postfix+=s.top();
        s.pop();
    }
    return postfix;
}
int main() {
    string infix = "(a+(b*c-(d/e^f)*g)*h)";
    //cout<<"Enter an infix expression : ";
    //cin>>infix;
    string postfix=convert(infix);
    cout<<"The postfix expression is : "<<postfix<<endl;
    return 0;
}
