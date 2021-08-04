#include <bits/stdc++.h>
using namespace std;         

 class A{                         //function overloading
     public:
     void fun(){
         cout<<"I am a function with no arguement"<<endl;
     }
     void fun(int x){
         cout<<"I am a function with int arguement"<<endl;
     }
     void fun(double x){
         cout<<"I am a function with double arguement"<<endl;
     }

 }; 


int main(){
A obj;
obj.fun();
 obj.fun(4);
 obj.fun(5.454);

    return 0;
}