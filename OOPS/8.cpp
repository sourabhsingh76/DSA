#include <bits/stdc++.h>
using namespace std;         //refer notes

class student{ 
    string name;               //private data member
    public:                      
    int age;                   
    bool gender; 

    student(){                      //Default costructor
        cout<<"Default costructor"<<endl;       
    }

    student(string s, int a, int g){      //parameterized constructor
 cout<<"Parameterised costructor"<<endl; 
    name=s;
    age=a;
    gender=g;
    }       
 
    student(student &a){           //Copy costructor
         cout<<"Copy costructor"<<endl;      
         name=a.name;
         age=a.age;
         gender=a.gender;
    } 

    ~student(){             //Destructor
        cout<<"Destructor called"<<endl;
    }

    bool operator == (student &a){       //opertor overloading    //we have passed object a of student class as a parameter
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
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
//a.printInfo();
student b;
student c = a;
 
 if(c==a){    //we can't compare two objects with == thats why we use operator overloading //we have overloaded == operator   //we have to define what we expect from this == operator in class(in line 32)
     cout<<"Same"<<endl;
 }else{
     cout<<"Not same"<<endl;
 }

    return 0;
}