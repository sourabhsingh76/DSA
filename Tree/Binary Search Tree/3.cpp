#include <bits/stdc++.h>
using namespace std;            //deletion in BST

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


void bfs(node* root){  //to print the BST level by level   //level order print using queue and BFS in O(n)      //BFS is breadth first search
queue<node*> q;        //node* means queue store the address of each node
q.push(root);
q.push(NULL);
	while(!q.empty()){        //jab tk queue empty nhi ho jata
		node* f=q.front();
        if(f==NULL){          //all of this is to print level order print in differt lines
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
cout<<f->data<<",";
q.pop();

if(f->left){
    q.push(f->left);
}

if(f->right){
    q.push(f->right);
}
}
}
}

void inorder(node* root){         //inorder of a BST is always sorted   //imp
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<",";
    inorder(root->right);
}

node* deleteInBST(node* root,int data){
if(root==NULL){
    return NULL;
}
else if(data<root->data){
    root->left= deleteInBST(root->left,data);
    return root;
}
else if(data==root->data){      //found the node what we want to delete //then apply 3 cases
   //1. node with 0 children -lead node
   if(root->left==NULL && root->right==NULL){
       delete root;
       return NULL;
   }
   //2. node with only 1 child
    if(root->left!=NULL && root->right==NULL){
        node* temp=root->left;
       delete root;
       return temp;    //so the left subtree will get attached in the left pointer of the parent node
   }
   if(root->right!=NULL && root->left==NULL){
        node* temp=root->right;
       delete root;
       return temp;    //so the right subtree will get attached in the right pointer of the parent node
   }
   //3. node with only 2 children
    node* replace=root->right;
    while(replace->left!=NULL){
        replace=replace->left;     //we would find the inorder successor from the right subtree
    }
    root->data=replace->data;
    root->right=deleteInBST(root->right,replace->data);   //the right pointer of root is now pointing to a new subtree which does not contain inorder successor
    return root;
}
else{
     root->right= deleteInBST(root->right,data);
    return root;
}

}


int main(){
node* root=build();
inorder(root);
cout<<endl;

int s;
cin>>s;
root=deleteInBST(root,s);
inorder(root);
cout<<endl;
bfs(root);

return 0;
}