#include<iostream>
using namespace std;
 
 int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
 }

int main(){                 //factorial of n using function
   int n;
   cin>>n;
   cout<<factorial(n);

    return 0;
}