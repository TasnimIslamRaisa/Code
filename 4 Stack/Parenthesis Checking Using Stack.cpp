#include<iostream>
using namespace std;
class pm{
public:
	int size;
	int top;
	char *arr;
};
int isempty(class pm *s){
	if(s->top==-1)
		return 1;
	else 
		return 0;
}
int isfull(class pm *s){
	if(s->top==s->size-1)
		return 1;
	else 
		return 0;
}
void push(class pm *s,char c){
	if(isfull(s)){
		cout<<"Stack over flow!"<<endl;
	}
	else{
		s->top++;
		s->arr[s->top]=c;
	}
}
char pop(class pm *s){
	if(isempty(s))
		return -1;
	else{
		char val=s->arr[s->top];
		s->top--;
		return val;
	}
}
int pm(char *exp){
	// Create and initialize the stack
	class pm *s=(class pm*)malloc(sizeof(class pm));
	s->size=100;
	s->top=-1;
	s->arr=new char;
	for(int i=0;exp[i]!='\0';i++){
		if(exp[i]=='(')
			push(s,'(');
		else if(exp[i]==')'){
			if(isempty(s))
				return 0;
			else
				pop(s);
		}
	}
	if(isempty(s))
		return 1;
	else 
		return 0;
}
int main(){
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    char *exp="(8)((10-9))";
    if(pm(exp))     //if return 1;thats means true;
    	cout<<"The parenthesis is matching";
    else
    	cout<<"The parenthesis is not matching";

}