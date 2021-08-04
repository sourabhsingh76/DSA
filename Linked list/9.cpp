#include<bits/stdc++.h>
using namespace std;
 
class node{                            //reversing a linked list using iterative method
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

node* reverse(node* &head){        //reversing a linked list using iterative method
node* p=NULL;               //p is previous pointer
node* c=head;               //c is current pointer
node* n;                    //n is next pointer

while(c!=NULL){
n= c->next;
c->next=p;
p=c;
c=n;
}

return p;
}


int main(){
   node* head= NULL;
  buildList(head);
  print(head);

  node* newhead=reverse(head);
 print(newhead); 

    return 0;
  }