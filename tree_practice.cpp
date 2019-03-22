#include<iostream>
using namespace std;

struct node{
 int data;
 node *left,*right;
 node(int data) //a constructor of node
 {
     this->data=data;  //"this" is also a pointer pointing the current node
     left=right=NULL;  //both are null initially
 }
};

//postorder
//https://www.youtube.com/watch?v=IpyCqRmaKW4
void post_order(node *n)
{
    if(n==NULL) return;
    post_order(n->left);
    post_order(n->right);
    cout<<n->data<<" ";
}

int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);

    cout<<"postorder traversal:"<<endl;
    post_order(root);
    return 0;
}
