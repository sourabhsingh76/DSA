#include<iostream>
using namespace std;
 
 int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
 }

int main(){                 //nCr calculation using function
   int n,r;
   cin>>n>>r;
   int ans=factorial(n)/(factorial(n-r)*factorial(r));    //don't forget to apply brackets
   cout<<ans;

    return 0;
}