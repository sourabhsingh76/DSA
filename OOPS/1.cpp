#include <bits/stdc++.h>
using namespace std;         //refer notes

class student{               //class is a user defined datatype
    public:                   //necessary to put if we want to access attributes(or data members) outside class
    string name;               //attribute
    int age;                   //attribute
    bool gender;               //attribute

void printInfo(){
cout<<"Name = ";
cout<<name<<endl;
cout<<"Age = ";
cout<<age<<endl;
cout<<"Gender = ";
cout<<gender<<endl;
}

};                     //remember the semicolon here

int main(){
 student arr[3];            //we have declared 3 objects of student class
 for(int i=0;i<3;i++){
cin>>arr[i].name;          //arr[i] is object
cin>>arr[i].age; 
cin>>arr[i].gender;
 }
  
for(int i=0;i<3;i++){
arr[i].printInfo();       //method to print objects
 }
 
    return 0;
}