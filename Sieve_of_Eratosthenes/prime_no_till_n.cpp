#include<bits/stdc++.h>
using namespace std;
 
void primeNo(int n){             //prime no. till n
	int arr[n]={0};
for(int i=2;i<=n;i++){           //Sieve of Eratosthenes method
if(arr[i]==0){                   //0 represents unmarked and 1 represents marked
for(int j=i*i;j<=n;j+=i){         //refer screenshoot
  arr[j]=1;
}
}
}
for(int i=2;i<=n;i++){                //time complexity of O(n*log(logn))
if(arr[i]==0){
  cout<<i<<" ";
}
}
}
 
 
int main(){
  int n;
  cin>>n;
primeNo(n);
 
 return 0;
  }