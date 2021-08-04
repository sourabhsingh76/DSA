#include<bits/stdc++.h>
using namespace std;
 
class node{
public:
int data;
node* next;

node(int d){              //constructor
data=d;
next=NULL;
}

};


void insertAtHead(node* &head,int data){    //passing a pointer variable by reference
node* n= new node(data);
n->next = head;
head=n;
}

void print(node* &head){   //head will become null and head in main also become null coz head is passed by reference and output will print only 1 time
//node* temp=head;
while(head!=NULL){        //head in main fn will be modified as head is pass by reference in print fn 
    cout<<head->data<<"->";
    head=head->next;
}
cout<<endl;
}
 
int main(){
    node* head= NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    print(head);
    print(head);
    return 0;
  }
