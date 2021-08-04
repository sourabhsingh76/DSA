#include <bits/stdc++.h>
using namespace std;         

 class A{
     public:
     void funA(){
         cout<<"fun A"<<endl;       //multiple inheritance
     }
 }; 

 class B{
     public:
     void funB(){
         cout<<"fun B"<<endl;
     }
 };

 class C: public B,public A{      //A and B ke public aur protected attributes and methods C ke public me aa jayenge 
public:
 };                  //class C ne inherit kr lia funA function from class A and funB function from class B

int main(){
C obj;
obj.funA();
obj.funB();
    return 0;
}