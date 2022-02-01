#include<bits/stdc++.h>
using namespace std;
 
void primeFactorization(int n){            
int spf[n]={0};
for(int i=2;i<=n;i++){
    spf[i]=i;
    }
for(int i=2;i<=n;i++){                     //sieve of eratosthenes
    if(spf[i]==i){                         //prime factorization
for(int j=i*i;j<=n;j+=i){
 if(spf[j]==j){
     spf[j]=i;
    }
}
}
}
while(n!=1){
cout<<spf[n]<<" ";
n=n/spf[n];
}
}
 
 
int main(){
  int n;
  cin>>n;
primeFactorization(n);
 
 return 0;
  }