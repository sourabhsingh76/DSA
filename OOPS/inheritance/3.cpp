#include <bits/stdc++.h>
using namespace std;         

 class A{
     public:
     void funA(){
         cout<<"fun A"<<endl;       //multilevel inheritance
     }
 }; 

 class B : public A{           //A ke public aur protected attributes and methods B ke public me aa jayenge 
     public:
     void funB(){
         cout<<"fun B"<<endl;
     }
 };

 class C: public B{      //B ke public aur protected attributes and methods C ke public me aa jayenge 
public:
 };               

int main(){
C obj;
obj.funA();
obj.funB();
    return 0;
}