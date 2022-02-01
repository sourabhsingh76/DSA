#include<bits/stdc++.h>
using namespace std;
 
 int updatebit(int n, int pos, int value){
  int mask= ~(1<<pos);                     //first clear bit then set bit
  n= n & mask;
   return (n | (value<<pos));         //code not running
 }

int main(){
 cout<<updatebit(5,1,1)<<endl;
    
    return 0;
  }
