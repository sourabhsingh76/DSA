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

class HBPair{
    public:
    int height;
    bool balance;
};

HBPair isHeightBalance(node* root){          //Height Balanced Tree        //refer notes
    HBPair p;
    if(root==NULL){         //Bottom Up Approach            O(n)
        p.height=0;
        p.balance=true;             
        return p;
    }
    HBPair left=isHeightBalance(root->left);                //post order traversal
    HBPair right=isHeightBalance(root->right);
    p.height= max(left.height, right.height) +1;
    if(abs(left.height-right.height)<=1 && left.balance && right.balance){     //imp
        p.balance=true;
    } else{
        p.balance=false;
    }
    return p;

}

int main(){
node* root=buildTree();
if(isHeightBalance(root).balance){
    cout<<"balanced"<<endl;
}else{
    cout<<"not balanced"<<endl;
}

return 0;
}