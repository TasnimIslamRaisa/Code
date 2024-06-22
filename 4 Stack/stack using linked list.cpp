#include<iostream>
using namespace std;
class stack *top; 
class stack{
public:
	int data;
	class stack *next; 
};
void print(class stack *tp){
	while(tp!=NULL){
		cout<<"Element : "<<tp->data<<" "<<endl;
		tp=tp->next;
	}
}
int isempty(class stack *tp){
	if(tp==NULL)
		return 1;
	else
		return 0;
}
int isfull(class stack *top){
	stack *p=new stack;
	if(p==NULL)
		return 1;
	else
		return 0;
}
class stack *push(class stack *top,int data){
	if(isfull(top))
		cout<<"Stack over flow!"<<endl;
	else{
		class stack *p=new stack;
		p->data=data;
		p->next=top;
		top=p;
		return top;
	}
}
int pop(class stack *tp){
	if(isempty(tp))
		cout<<"Under flow!"<<endl;
	else{
		class stack *p=tp;
		top=(tp)->next;
		int x= p->data;
		free(p);
		return x; 
	}
}
int peek(int pos){
	class stack *p=top;
	for(int i=0;(i<pos-1 && p!=NULL);i++){
		p=p->next;
	} 
	if(p!=NULL)
		return p->data;
	else 
		return -1;
}
int stacktop(){
	return top->data;
}
int stackbottom(class stack *top){
	class stack *p=top;
	while(p!=NULL){
		p=p->next;
	}
	return p->data;
}
int main(){
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);        
    top=push(top,3);
    top=push(top,5);
    top=push(top,15);
    top=push(top,18);
    print(top); 
    /*int e=pop(top);
    cout<<"poped Element is : "<<e<<endl;
    print(top);
    for (int i = 1; i <= 4; i++)
    {
    	cout<<"Value at position "<<i<<" is "<<peek(i)<<endl;;
    }*/
    int b=stackbottom(top);
    cout<<"Bottom Element of stack "<<b;
    

}
