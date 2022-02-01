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

int height(node* root){
if(root==NULL){
return 0;
}
int h1=height(root->left);
int h2=height(root->right);    
return max(h1,h2)+1;
}

int diameter(node* root){
    if(root==NULL){
        return 0;
    }
int h1=height(root->left);       //root (line 43,44,45)     //preorder traversal
int h2=height(root->right); 
int d=h1+h2;                                     //computing height is O(n) (line 43,44,45)  
int d2=diameter(root->left);    //left     //and we are computing height for every node so overall TC is O(n^2) (line 46,47)  
int d3=diameter(root->right);    //right
return max(d,max(d2,d3));
}

int main(){
node* root=buildTree();
cout<<diameter(root)<<endl;

return 0;
}