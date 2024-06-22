//Binary search tree or NOT 
#include <iostream>
using namespace std;
class node {
    public:
    int data;
    node *left;
    node *right;
};
node *createnode(int data){
    node *p=new node;
    p->data=data;
    p->left=NULL;
    p->right=NULL;
}
int isbts(node *root){
    static node *prev=NULL;
    if(root!=NULL){
        if(!isbts(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev=root;
        return isbts(root->right);
    }
    else
    return 1;
}
int main() {
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    
    node *root=createnode(5);
    node *n2=createnode(3);
    node *n3=createnode(6);
    node *n4=createnode(1);
    node *n5=createnode(4);
    root->left=n2;
    root->right=n3;
    n2->left=n4;
    n2->right=n5;
    /*   bts
            5
          / \
         3   6
        / \
       1   4  
    not bts 
            5
          / \
         23   6
        / \
       1   4  
  */
    if(isbts(root))
    cout<<"The tree is BTS"<<endl;
    else
    cout<<"The tree is not BTS"<<endl;
    return 0;
}