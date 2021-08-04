#include <bits/stdc++.h>
using namespace std;         //refer notes

class student{ 
    string name;               //private data member
    public:                      
    int age;                   
    bool gender; 

    student(string s, int a, int g){      //declaration of constructor of class name student
    name=s;
    age=a;
    gender=g;
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
student a("Sourabh",20,1);   //jab bhi humne koi student class ka object banate hai aur hme usi me uski values specify kr di to hum uss case me use krte hai costructors
a.printInfo();
 
    return 0;
}