#include<iostream>
#include <stdlib.h>
using namespace std;
class stack{
public:
	int size;
	int top;
	int *arr;
};
int isempty(class stack *ptr)
{
	if(ptr->top==-1){
		return 1;
	}
	return 0;
}
int isfull(class stack *ptr)
{
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);  
    class stack *s=(class stack*)malloc(sizeof(class stack));
    s->size=6;
    s->top=s->size-1;
    s->arr=(int *)malloc(s->size * sizeof(int));
    s->arr[0]=2;
    s->arr[1]=3;
    s->arr[2]=24;
    s->arr[3]=12;
    s->arr[4]=9;
    s->arr[5]=13;
    if(isempty(s)){
    	cout<<"The stack is empty"<<endl;
    }
    else
    	cout<<"The stack is not empty"<<endl;
    if(isfull(s))
    	cout<<"The stack is full"<<endl;
    else
    	cout<<"The stack is not full"<<endl;
}