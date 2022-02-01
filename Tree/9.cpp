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

void bfs(node* root){    //level order print using queue and BFS in O(n)      //BFS is breadth first search
queue<node*> q;          //node* means queue store the address of each node
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

int replaceSum(node* root){    //replace each node by sum of its child nodes(descenders) (dont change leaf nodes)
if(root==NULL){
    return 0;
}
if(root->left==NULL && root->right==NULL){     //we will not change the leaf nodes
    return root->data;
}
int ls=replaceSum(root->left);
int rs=replaceSum(root->right);
int temp=root->data;                                //imp
root->data=ls + rs;
return temp+ root->data;

}

int main(){
node* root=buildTree();
bfs(root);
cout<<endl;
replaceSum(root);
bfs(root);

return 0;
}