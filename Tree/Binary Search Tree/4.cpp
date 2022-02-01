#include <bits/stdc++.h>
using namespace std;          //to check if the given tree is BST or not

class node{                   //implementing binary search tree using recursion
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

node* insertInBST(node* root,int data){    //accepts the old root node & data and returns the new root node
    if(root==NULL){                   //every node is going to return its address to its parent node
        root=new node(data);
        return root;
    }
    if(data<=root->data){       //recursive case- insert in the pointers and update pointers
        root->left=insertInBST(root->left,data);
    }else{
        root->right=insertInBST(root->right,data);
    }
    return root;
}

node* build(){       //purpose of build is to take input and returning tree
    int d;           //read a list of numbers till -1 and also these numbers will be inserted into BST
    cin>>d;
    node* root=NULL;
    while(d!=-1){
        root=insertInBST(root,d);
        cin>>d;
    }
    return root;
}


void inorder(node* root){         //inorder of a BST is always sorted   //imp
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<",";
    inorder(root->right);
}

bool isBST(node* root, int minV=INT_MIN, int maxV=INT_MAX){
    if(root==NULL){
        return true;
    }
    if(root->data>=minV && root->data<=maxV && isBST(root->left, minV, root->data) && isBST(root->right, root->data, maxV)){
        return true;
    }
    return false;
}


int main(){
node* root=build();
inorder(root);
cout<<endl;

if(isBST(root)){
    cout<<"It is a BST"<<endl;
}else{
     cout<<"Not a BST"<<endl;
}

return 0;
}