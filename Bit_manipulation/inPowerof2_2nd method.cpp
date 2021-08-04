#include<bits/stdc++.h>
using namespace std;

bool isPowerofTwo(int n){
    return (n && !(n & (n-1)));
}

int main(){
  int n;
  cin>>n;
isPowerofTwo(n) ? cout<<"yes":cout<<"no";
 
    return 0;
  }
