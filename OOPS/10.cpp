#include<bits/stdc++.h>
using namespace std;

class A{
public:
int a;
void funcA(){
    cout<<"funcA\n";
    cout<<"a";
}

private:
int b;
void funcB(){
    cout<<"funcB\n";
}

protected:
int c;
void funcC(){
    cout<<"funcC\n";
}

};


int main(){
A obj;
obj.funcA();
obj.a=2;

return 0;
}