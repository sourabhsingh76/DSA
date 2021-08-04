#include <bits/stdc++.h>
using namespace std;         

class Complex{                 //operator overloading
private:
int real,imag;
public:
Complex(int r=0,int i=0){       //we have to initialise it for res class object(in line 14)   
    real=r;
    imag=i;
}

Complex operator + (Complex const &obj){    //definig the functionality of + operator
    Complex res;
    res.real= real+ obj.real;   //res.real is 0 initially(due to line 8)   //real is of c1 and obj.real is of c2
    res.imag= imag+ obj.imag;   //res.imag is 0 initially(due to line 8)   //imag is of c1 and obj.imag is of c2
    return res; 
}

void print(){
    cout<<real<<" +i"<<imag<<endl;
}

};


int main(){
Complex c1(12,2);
Complex c2(2,5);
Complex c3=c1+c2;           //we can't add two complex no. directly so we will use operator overloading
c3.print();

    return 0;
}