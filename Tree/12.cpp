#include <bits/stdc++.h>
using namespace std;

class node{                 //building a binary tree from preorder and inorder taversal
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


node* createTreeFromTrav(int *in,int *pre,int s,int e){             //refer notes
static int i=0;           //imp
if(s>e){
    return NULL;
}
node* root=new node(pre[i]);
int index=-1;
for(int j=s;j<=e;j++){             //linear search
    if(in[j]==pre[i]){
        index=j;          //index is imp in this qsn 
        break;
    }
}
i++;
root->left=createTreeFromTrav(in,pre,s,index-1);
root->right=createTreeFromTrav(in,pre,index+1,e);
return root;
}


int main(){
int pre[]={1,2,3,4,8,5,6,7};                  //preorder traversal
int in[]={3,2,8,4,1,6,7,5};                   //inorder traversal
int n=sizeof(in)/sizeof(int);

node* root=createTreeFromTrav(in,pre,0,n-1);
bfs(root);


return 0;
}