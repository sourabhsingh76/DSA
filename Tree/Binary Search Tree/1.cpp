#include <bits/stdc++.h>
using namespace std;

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

int main(){
node* root=build();
inorder(root);
cout<<endl;
bfs(root);

return 0;
}