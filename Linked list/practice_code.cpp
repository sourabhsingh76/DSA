#include <bits/stdc++.h>
using namespace std;

class node{          //written by me        //singly linked list
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};


void insertAtHead(node* &head,int val){
    node* n= new node(val);
    n->next=head;
    head=n;
}


void insertAtTail(node* &head,int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
     node* n= new node(val);
     temp->next=n;
}

void deleteAtHead(node* &head){
    node* todelete=head;
head=head->next;
delete todelete;
}

void deletion(node* &head,int pos){
if(pos==1){
    deleteAtHead(head);
    return;
}
node* temp=head;
int count=1;
while(count<pos-1 && temp!=NULL){
    temp= temp->next;
    count++;
}
node* todelete=temp->next;
temp->next= temp->next->next;
delete todelete;

}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){         //had done mistake here
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
node* head=NULL;
insertAtTail(head,1);
insertAtTail(head,2);
insertAtTail(head,3);
insertAtTail(head,4);
display(head);

insertAtHead(head,5);
display(head);
deletion(head,3);
display(head);

return 0;
}