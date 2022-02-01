#include <bits/stdc++.h>
using namespace std;

class node{                   //building a height balanced tree from an array
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


node* buildTreeFromArray(int* a,int s,int e){
if(s>e){
return NULL;
}
int mid=(s+e)/2;
node* root=new node(a[mid]);
root->left= buildTreeFromArray(a,s,mid-1);
root->right= buildTreeFromArray(a,mid+1,e);
return root;

}

int main(){
int a[]={1,2,3,4,5,6,7};
int n=7;
node* root= buildTreeFromArray(a,0,n-1);
bfs(root);
return 0;
}