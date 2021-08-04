#include<bits/stdc++.h>
using namespace std;

bool isPowerofTwo(int n){                      //to check whether the no. is in power of 2 or not
if(n>0){
return (ceil(log2(n))==floor(log2(n)));        //ceil floor application
}else{
  return false;
}
}

int main(){
  int n;
  cin>>n;
if(isPowerofTwo(n)){
  cout<<"Yes"<<endl;
}else{
  cout<<"No"<<endl;
}
    return 0;
  }
