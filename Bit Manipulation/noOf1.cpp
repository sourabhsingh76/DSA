#include<bits/stdc++.h>
using namespace std;

int noOf1(int n){
    int count =0;
while(n!=0){
n= (n & n-1);       //no. of 1 in binary representation of a no.
count++;
}
return count;
}

int main(){
  int n;
  cin>>n;
cout<<noOf1(n);
 
    return 0;
  }
