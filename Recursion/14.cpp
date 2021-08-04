#include <bits/stdc++.h>
using namespace std;              //printing spelling of digits of n(using recursion and 2d character array)
                                  //method 2
char spelling[][6]={"zero","one","two","three","four","five","six","seven","eight","nine"};  //refer notes //this has global scope

void conversion(int n){
    if(n==0){
        return; 
    }
    conversion(n/10);
cout<< spelling[n%10]<<" ";       //here [n%10] represents rows of 2d char array

}

int main(){           
int n;
cin>>n;
conversion(n);

return 0;
}