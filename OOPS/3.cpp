#include <bits/stdc++.h>
using namespace std;         //refer notes

class student{ 
    string name;               //private data member
    public:                      
    int age;                   
    bool gender; 

    student(string s){      //declaration of constructor of class name student
    name=s;
    }

void getName(){        
cout<<name<<endl;
}

};                     //remember the semicolon here

int main(){
student a("Sourabh");   //jab bhi humne koi student class ka object banate hai aur hme usi me uski values specify kr di to hum uss case me use krte hai costructors
a.getName();
 
    return 0;
}