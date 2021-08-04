#include<bits/stdc++.h>
using namespace std;
 
class node{
public:
int data;
node* next;

node(int d){              //constructor
data=d;
next=NULL;                //by default
}

};


void insertAtHead(node* &head,int data){     
node* n= new node(data);
n->next = head;
head=n;
}

int length(node* head){       
    int len=0;
    while(head!=NULL){
        head=head->next;
        len+=1;
    }
    return len;
}

void insertAtTail(node* &head,int data){
    if(head==NULL){
        head= new node(data);            
        return;
    }
    node* tail=head;
    while(tail->next!=NULL){         //imp
        tail = tail->next;            //imp
    }
    tail->next = new node(data);        //imp
    return;
}

void insertInMiddle(node* &head,int data,int p){
    if(head==NULL || p==0){
        insertAtHead(head,data);
    }
    else if(p>length(head)){
        insertAtTail(head,data);
    }
    else{
        //insert in the middle
        //take p-1 jumps
        int jump=1;            //imp     //initialise with 1 not 0
        node* temp=head;
        while(jump<=p-1){
            temp=temp->next;
            jump+=1;
        }
        node* n= new node(data);      //imp
        n->next=temp->next;           //imp
        temp->next=n;                 //imp
    }
}

void print(node* head){            //copy of head
//node* temp=head;
while(head!=NULL){              
    cout<<head->data<<"->";
    head=head->next;
}
cout<<endl;
}

bool searchRecursive(node* head,int key){            //recursive method for searching an element
    if(head==NULL){
        return false;
    }
    if(head->data == key){
        return true;
    }else{
return searchRecursive(head->next,key);
    }
}
 
bool searchIterative(node* head,int key){          //iterative method for searching an element
while(head!=NULL){
if(head->data ==key){
    return true;
}
head=head->next;
}
return false;
}

int main(){
    node* head= NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtTail(head,6);
    cout<<length(head)<<endl;
    insertInMiddle(head,2,3);
    print(head);

if(searchRecursive(head,4)){
    cout<<"Element is present"<<endl;
}else{
    cout<<"Element is not present"<<endl;
}

if(searchIterative(head,15)){
    cout<<"Element is present"<<endl;
}else{
    cout<<"Element is not present"<<endl;
}
    return 0;
  }