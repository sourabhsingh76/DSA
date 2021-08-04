#include<bits/stdc++.h>
using namespace std;                      //doubt
 
class node{                            //reversing a linked list using recursive method
public:
int data;
node* next;

node(int d){             
data=d;
next=NULL;                
}

};


void insertAtHead(node* &head,int data){     
node* n= new node(data);
n->next = head;
head=n;
}

void insertAtTail(node* &head,int data){
    if(head==NULL){
       insertAtHead(head,data);           
        return;
    }
    node* tail=head;
    while(tail->next!=NULL){         //imp
        tail = tail->next;            //imp
    }
    tail->next = new node(data);        //imp
    return;
}

void buildList(node* &head){
    int data;
    cin>>data;
    while(data!=-1){                    //important
        insertAtTail(head,data);
        cin>>data;
    }
    return;
}

void print(node* head){            //copy of head
//node* temp=head;
while(head!=NULL){              
    cout<<head->data<<"->";
    head=head->next;
}
cout<<endl;
}

node* reverseRecursive(node* &head){        //reversing a linked list using recursive method
if(head==NULL || head->next==NULL){           //O(n)
    return head;
}
node* newhead=reverseRecursive(head->next);           
head->next->next= head;
head->next=NULL;

return newhead;
}


int main(){
   node* head= NULL;
  buildList(head);
  print(head);  

  node* newhead=reverseRecursive(head);
 print(newhead); 

    return 0;
  }