/*
//string
#include<iostream>
using namespace std;
int index(string a,string b);
string substring(string a,int pos,int len);
string insertt(string a,int pos,string b);
string deletee(string a,int pos,int len);
string deletemany(string a,string b);
string replacee(string a,string b,string c);
string replacemany(string a,string b,string c);
string rotation(string a,int pos);

int index(string a,string b)
{
    int l1,l2,i,j,index=-1;
    l1=a.size();
    l2=b.size();
    for(i=0;i<=l1-l2;i++){
        for(j=0;j<l2;j++){
            if(a[i+j]!=b[j]){
                break;
            }
        }
            if(l2==j)
                index=i;
    }
    return index;
}
string substring(string a,int pos,int len)
{
    string sub="";
    int i;
    for(i=pos;i<pos+len;i++)
    sub=sub+a[i];
    return sub;
}
string insertt(string a,int pos,string b)
{
    string m,n;
    m=substring(a,0,pos);
    m=m+b;
    n=substring(a,pos,a.size()-pos);
    return m+n;
}
string deletee(string a,int pos,int len)
{
    string m,n;
    m=substring(a,0,pos);
    n=substring(a,pos+len,a.size()-pos-len);
    return m+n;
}
string deletemany(string a,string b)
{
    int k=index(a,b);
    string m=a;
    while(k!=-1){
        m=deletee(m,k,b.size());
        k=index(m,b);
    }
    return m;
}
string replacee(string a,string b,string c)
{
    int k=index(a,b);
    string m,n;
    if(k!=-1){
        m=deletee(a,k,b.size());
        n=insertt(m,k,c);
        return n;
    }
}
string replacemany(string a,string b,string c)
{
    int k=index(a,b);
    string m=a;
    while(k!=-1){
        m=replacee(m,b,c);
        k=index(m,b);
    }
    return m;
}
string rotation(string a,int pos)
{
    string m,n;
    m=substring(a,pos,a.size()-pos);
    n=substring(a,0,pos);
    return m+n;
}
//array insert
int inst(int a[],int e,int pos,int num)
{
    int i;
    for(i=e-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=num;
    e=e+1;
    return e;
}
//array delete
int adlt(int a[],int e,int pos)
{
    for(int i=pos;i<=e-1;i++){
        a[i]=a[i+1];
    }
    e=e-1;
    return e;
}
int ls(int a[],int e,int num)
{
    a[e]=num;
    for(int loc=0;loc<=e;loc++){
            if(a[loc]==num){
        return loc;}
    }
}
void bubblesort(int a[],int e)
{
    int temp,i,j;
    for(i=0;i<e-1;i++){
        for(j=0;j<e-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array : ";
    for(i=0;i<e;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int bs(int a[],int e,int num)
{
    int low=0,mid,high=e-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==num)
            return mid;
        if(a[mid]<num)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;

}
int main()
{
    string a="john cena";
    string b="cena";
    int d=index(a,b);
    if(d==-1)
         cout<<"Not matched "<<endl;
    else
        cout<<"Pattern matched at index "<<d<<endl;
    string s=substring(a,1,3);
    cout<<"Sub string : "<<s<<endl;
    string i=insertt(a,2,"ab");
    cout<<"After insert : "<<i<<endl;
    string dlt=deletee(a,2,4);
    cout<<"After delete : "<<dlt<<endl;
    string dltmany=deletemany("xxaxxbxxcxxdxx","xx");
    cout<<"After deletemany : "<<dltmany<<endl;
    string r=replacee(a,b,"yy");
    cout<<"After replace : "<<r<<endl;
    string r1=replacemany("bba  bbbcbbdbbebbfbbgbb","bb","  ");
    cout<<"After replacemany : "<<r1<<endl;
    string ro=rotation("john",2);
    cout<<"After rotate : "<<ro<<endl;
    int arr[]={1,3,12,9,5};
    int e=sizeof(arr)/sizeof(arr[0]);
    int pos=4,num=55;
    int m=inst(arr,e,pos,num);
    cout<<"After insert in array : ";
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    int n=adlt(arr,e,5);
    cout<<endl<<"After delete in array : ";
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    int loc=ls(arr,e,12);
    if(loc==e)
        cout<<endl<<"Number not found"<<endl;
    else
        cout<<endl<<"Number found at index  "<<loc<<endl;
    bubblesort(arr,e);
    int binary=bs(arr,e,1);
    if(binary!=-1)
        cout<<"Number found at index "<<binary<<endl;
    else
        cout<<endl<<"Number not found"<<endl;
    return 0;
}   */
/*
#include <iostream>
using namespace std;
class node{
public:
      int data;
      node *next;
};
void print(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
//delete 1st
node *case1(node *head){
    node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
//delete index
node *case2(node *head,int index){

    node *p,*q;
    p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    q=p->next;
    p->next=q->next;
    free(q);
    return head;
}
//delete num
node *case3(node *head,int num)
{
    node *p,*q;
    p=head;
    q=head->next;
    while(q->data!=num && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==num){
        p->next=q->next;
        free(q);
    }
    return head;
}
//delete last
node *case4(node *head)
{
    node *p=head;
    node *q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
int main() {
    class node *head,*second,*third,*fourth,*five,*six;
    head=new node;
    second=new node;
    third=new node;
    fourth=new node;
    five=new node;
    six=new node;
    head->data=8;
    head->next=second;
    second->data=9;
    second->next=third;
    third->data=11;
    third->next=fourth;
    fourth->data=7;
    fourth->next=five;
    five->data=2;
    five->next=six;
    six->data=3;
    six->next=NULL;
    cout<<"Linked list : ";
    print(head);
    head=case1(head);
    cout<<endl<<"1st node deleted : ";
    print(head);
    head=case2(head,2);
    cout<<endl<<"index node deleted : ";
    print(head);
    head=case3(head,11);
    cout<<endl<<"delete a num : ";
    print(head);
    head=case4(head);
    cout<<endl<<"delete last num : ";
    print(head);
    return 0;
}
*/
 /*paranthesis matching
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
	class pm *s;
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
    char exp[100]="(8)(10-9))";
    if(pm(exp))     //if return 1; thats means true;
    	cout<<"The parenthesis is matching";
    else
    	cout<<"The parenthesis is not matching";

}*/

// multiple paranthesis matching

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
}
int pm(char *e){
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
			if(match(popped_ch,e[i]))
				return 1;
		}
	}
	if(isempty(sp))
		return 1;
	else
		return 0;
}
int main()
{
	char exp[]= "[4-6]((8){(9-8)})";
	if(pm(exp))
		cout<<"Balanced";
	else
		cout<<"not Balanced";
}
/*
//Coding Infix to Postfix in C using Stack
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
    }
}
char pop(stack *sp){
    if(isempty(sp))
    return -1;
    else{
        char val=sp->arr[sp->top];
        sp->top--;
        return val;
    }
}
int precedence(char ch){
    if(ch == '^')
    return 4;
    if(ch=='*' || ch=='/')
    return 3;
    if(ch=='+' || ch=='-')
    return 2;
    else
    return 0;
}
int isop(char ch){
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^')
    return 1;
    else
    return 0;
}
char *infixTopostfix(char **infix){
    stack *sp=new stack;
    sp->size=10;
    sp->top=-1;
    sp->arr=new char;
    char *postfix=new char;
    int i=0;
    int j=0;
    while(*infix[i]!='\0'){
        if(!isop(*infix[i])){
            postfix[j]=*infix[i];
            j++;
            i++;
        }
        else{
            if(precedence(*infix[i]) >= precedence(stacktop(sp) )){
                push(sp,*infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(sp);
                j++;
            }
        }
    }
    while(!isempty(sp)){
        postfix[j]=pop(sp);
        j++;
    }
    return postfix;
}
int main() {
    //char *infix="x-y/z-k*d";
    char *infix="a+b*c-d/e^f*g*h";
    cout<<"Postfix is "<<infixTopostfix(&infix);
    return 0;
}
*//*
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
void enq(queue *q,int data){
    if(isfull(q))
    cout<<"Queue is full.Overflow!"<<endl;
    else{
       q->r++;
       q->arr[q->r]=data;
       cout<<"Enqued element : "<<data<<" ";
    }
}
int deq(queue *q){
    int a=-1;
    if(isempty(q))
    cout<<"Queue underflow!"<<endl;
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}
int main(){
    queue q;
    q.size=4;
    q.f=q.r=0;
    q.arr=new int;
    enq(&q,12);
    return 0;
}*/









