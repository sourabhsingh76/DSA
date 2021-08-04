#include<bits/stdc++.h>
using namespace std;
 
class node{
public:
int data;
node* next;

node(int d){              //constructor
data=d;
next=NULL;             //by default
}

};

/*                 //we can either define the class of linkedList or we can work with functions
class LinkedList{        //instead of writing linkedList class we are going to write separate fn for each of the task
    node* head;          //we will take up the functional approach that why we have made LinkedList class a comment
    node* tail; 
public:
    LinkedList(){
        head= NULL;
        tail= NULL;
    }
    void insert(){

    }
};
*/

void insertAtHead(node* &head,int data){    //passing a pointer variable by reference(to modify the pointer head)
node* n= new node(data);             //dynamic memory allocation
n->next = head;        //n->next is same as (*n).next where *n is the object
head=n;
}

void print(node* head){         //we are not modifying head pointer in fn so we pass it by vlaue
node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;               //temp->next is same as (*temp).next
}
cout<<endl;
}
 
int main(){
    node* head= NULL;                  //head pointer is pointing to NULL in the beginning
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    print(head);
    print(head);
    return 0;
  }
