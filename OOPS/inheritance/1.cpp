#include <bits/stdc++.h>
using namespace std;         

 class A{
     public:
     void fun(){
         cout<<"inherited"<<endl;
     }
 }; 
 class B: public A{      //A ke public aur protected attributes and methods B ke public me aa jayenge      //single inheritance 
 };                  //class B ne inherit kr lia fun function from class A

int main(){
B obj;
obj.fun();
 
    return 0;
}