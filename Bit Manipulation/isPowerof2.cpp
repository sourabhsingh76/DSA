#include<bits/stdc++.h>
using namespace std;

bool isPowerofTwo(int n){
  if(n==0){
    return false;
  }                  //1st method
if((n & (n-1))==0){          //&- bitwise operator
return true;                  //refer copy notes
}else{
return false;
}
}

int main(){
  int n;
  cin>>n;
isPowerofTwo(n) ? cout<<"yes":cout<<"no";
 
    return 0;
  }
