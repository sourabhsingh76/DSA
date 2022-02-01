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

void print(node* root){            //preorder print
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}


int height(node* root){        //O(n)
    if(root==NULL){
        return 0;
    }
    int ls=height(root->left);
    int rs=height(root->right);
    return max(ls,rs)+1;
}

void printKthLevel(node* root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){                          //we are on the right level that we want to print
        cout<<root->data<<" ";
        return;
    }
    printKthLevel(root->left,k-1);
    printKthLevel(root->right,k-1);
     return;
}

void printAllLevels(node* root){     //O(n^2)
    int H=height(root);
    for(int i=1;i<=H;i++){
printKthLevel(root,i);
cout<<endl;
    }
}

int main(){
node* root=buildTree();
print(root);
cout<<endl;
cout<<height(root)<<endl;
printKthLevel(root,3);
cout<<endl;
printAllLevels(root);

return 0;

}