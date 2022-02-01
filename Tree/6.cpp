#include <bits/stdc++.h>
using namespace std;

class node{                   //implementing binary tree using recursion
    public:
    int data;                     
    node* left;
    node* right;

node(int d){
data=d;
left=NULL;
right=NULL;
}

};

node* buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    node* root=new node(d);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}

int count(node* root){        //counting nodes of a tree
    if(root==NULL){
        return 0;
    }
    return 1+ count(root->left) + count(root->right);     //doing preorder traversal in O(n)
}

int sum(node* root){         //sum of nodes of a tree
    if(root==NULL){
        return 0;
    }
    return root->data + sum(root->left) + sum(root->right);
}

int main(){
node* root=buildTree();
cout<<count(root)<<endl;
cout<<sum(root)<<endl;

return 0;
}