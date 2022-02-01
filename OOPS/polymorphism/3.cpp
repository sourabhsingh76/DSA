#include <bits/stdc++.h>
using namespace std;         
 
class base{                                       //refer notes
public:
virtual void print(){                                    //virtual fn
cout<<"this is the base's class print fn"<<endl;
}

void display(){
cout<<"this is the base's class display fn"<<endl;
}

};

class derived : public base{
public:
void print(){
cout<<"this is the derived's class print fn"<<endl;
}

void display(){
cout<<"this is the derived's class display fn"<<endl;
}  

};


int main(){                            //doubt (revise pointers)
base *baseptr;
derived obj;
baseptr= &obj;
baseptr -> print();        // in case of pointer we use -> to call the fn
baseptr -> display();

    return 0;
}