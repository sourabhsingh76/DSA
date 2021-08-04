#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);      //factorial of n
}

int main(){
 int n;
 cin>>n;
cout<<factorial(n);

return 0;
}