#include<iostream>
#include<cstdlib>
using namespace std;
class multipm{
public:
	int size;
	int top;
	char *exp;
};
int isempty(multipm *ptr){
	if(ptr->top==-1)
		return 1;
	else
		return 0;
}
int isfull(multipm *ptr){
	if(ptr->top==ptr->size-1)
		return 1;
	return 0;
}
void push(multipm *ptr,char val){
	if(isfull(ptr))
		cout<<"cnt push";
	else{
		ptr->top++;
		ptr->exp[ptr->top]=val;
	}
}
char pop(multipm *ptr){
	if(isempty(ptr))
		return 0;
	else{
		char val=ptr->exp[ptr->top];
		ptr->top--;
		return val;
	}
}
int match(char a,char b){
	if(a=='{' && b=='}')
		return 1;
	if(a=='[' && b==']')
		return 1;
	if(a=='(' && b==')')
		return 1;
	return 0;
}
int pm(char e[]){
	multipm *sp=(class multipm*)malloc(sizeof(class multipm));
	sp->size=10;
	sp->top=-1;
	sp->exp=new char;
	char popped_ch;
	for(int i=0;e[i]!='\0';i++){
		if(e[i]=='(' || e[i]=='{' || e[i]=='['){
			push(sp,e[i]);
		}
		else if(e[i]==')' || e[i]=='}' || e[i]==']'){
			if(isempty(sp)){
				return 0;
			}			
			popped_ch =pop(sp);
			if(!match(popped_ch,e[i]))
				return 0;
		}
	}
	if(isempty(sp))
		return 1;
	else 
		return 0;
}
int main()
{
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);

	char *exp= "{(8)*9}";
	if(pm(exp))
		cout<<"Balanced ";
	else
		cout<<"not Balanced ";
}