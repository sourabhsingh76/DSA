#include<bits/stdc++.h>
using namespace std;

int main(){  
int n;
cin>>n;                        //character array
  char arr[n+1];               //1st method
  cin>>arr;                     //given name is palindrome or not
  int s=0;
  int e=n-1;
  int count=0;
  while(s<=e){
if(arr[s]==arr[e]){
  count++;
}
s++;
e--;
  }
  
if(count== n/2 || count== (n/2 +1)){
  cout<<"It is a palindrome"<<endl;
}else{
cout<<"It is not a palindrome"<<endl;
  }
  return 0;

}