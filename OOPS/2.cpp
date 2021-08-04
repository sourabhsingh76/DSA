#include <bits/stdc++.h>
using namespace std;         //refer notes

class student{ 
    string name;               //private data member
    public:                      
    int age;                   
    bool gender; 

void setname(string s){        //declaration of fn to access the private data member from outside class
name=s;
}

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
 student arr[3];            
 for(int i=0;i<3;i++){
     string s;
     cin>>s;
arr[i].setname(s);           //imp
cin>>arr[i].age; 
cin>>arr[i].gender;
 }
  
for(int i=0;i<3;i++){
arr[i].printInfo();      
 }
 
    return 0;
}