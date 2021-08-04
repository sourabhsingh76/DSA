#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n==1 || n==0){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);      //nth fibonacci number
}

int main(){
 int n;
 cin>>n;
cout<<fibonacci(n);

return 0;
}