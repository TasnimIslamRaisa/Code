//Binary tree InOrder, PostOrder and PreOrder Traversals
// Binary search tree traversal , insert

#include <iostream>
using namespace std;
class node{
   public:
   int data;
   node *left=NULL;
   node *right=NULL;
} ;
node *createnode(int data){
    node *p=new node;
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}
node *insertion(node *root,int data){
    if(root==NULL)
    return createnode(data);
    if(root->data > data)
    root->left=insertion(root->left,data);
    else
    root->right=insertion(root->right,data);
    return root;
}
void preOrder(node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void inOrder(node *root){
    if(root!=NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}
void postorder(node *root ){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
int main() {
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    class node *root=NULL;
    root=insertion(root,8);
    root=insertion(root,3);
    root=insertion(root,1);
    root=insertion(root,6);
    root=insertion(root,16);
    root=insertion(root,7);
    root=insertion(root,9);
    cout<<endl<<"pre order : ";
    preOrder(root);
    cout<<endl<<"In order : ";
    inOrder(root);
    cout<<endl<<"post order : ";
    postorder(root);
    return 0;
}

/*
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
} ;
node *createnode(int data){
    node *p=new node;
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void preOrder(node *root){
   
    if(root!=NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
} 
void postOrder(node *root){
    if(root!=NULL){
       postOrder(root->left);
       postOrder(root->right);
       cout<<root->data<<" ";
    }
}
void inOrder(node *root){
    if(root!=NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}
int main(){
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);

    node *root=createnode(2);
    node *n2=createnode(12);
    node *n3=createnode(6);
    node *n4=createnode(1);
    node *n5=createnode(4);
    node *n6=createnode(20);
    node *n7=createnode(15);
    node *n8=createnode(16);
    node *n9=createnode(22);
    root->left=n2;
    root->right=n3;
    n2->left=n4;
    n2->right=n5;
    n3->left=n6;
    n3->right=n7;
    n4->left=n8;
    n6->left=n9;
    
//                  2
//               /    \ 
//             12      6
//            /  \    / \
//           1    4  20  15
//          /        |   
//          16       22
          
    cout<<"Pre-Order Taversal : ";
    preOrder(root);
    cout<<endl<<"Post-Order Taversal : ";
    postOrder(root);
    cout<<endl<<"In-Order Taversal : ";
    inOrder(root);
    
}
*/