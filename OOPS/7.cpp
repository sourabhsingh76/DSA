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
 
    return 0;
}