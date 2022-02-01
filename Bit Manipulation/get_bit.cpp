#include<bits/stdc++.h>
using namespace std;
 
 int getbit(int n, int pos){
  if((n & (1<<pos))!=0){
return 1;
  }else{
    return 0;
  }
 }

int main(){
 cout<<getbit(5,2);
    
    return 0;
  }
