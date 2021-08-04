#include<bits/stdc++.h>
using namespace std;
 
class node{                            //inputing a linked list using operator overloading
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

istream& operator >> (istream &is, node* &head){      //operator fn        //operator overloading
    buildList(head);
    return is;
}

ostream& operator << (ostream &os, node* head){        //operator fn       //operator overloading
    print(head);
    return os;
}


int main(){ 
   node* head= NULL;
   node* head2= NULL;
 cin>>head>>head2;              //cascading (using >> multiple times in cin)    //>> is right shift operator
 cout<<head<<endl<<head2;       //cascading (using << multiple times in cout)   //<< is left shift operator

    return 0;
  }