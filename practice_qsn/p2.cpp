#include<bits/stdc++.h>
using namespace std;
 
 
int fact(int n){
    if(n==1){
return 1;
    }
return n*fact(n-1);
}
 
void rec(int &sum,int p,int count){         //at coder contest 208 (B qsn)
    if(count==0){
         return;
    }
    int a=p/fact(count);
    int b=p%fact(count);
    sum=sum+a;
    rec(sum,b,count-1);
}
 
int main(){
int p;
cin>>p;
int count=0;
for(int i=1;i<=10;i++){
if(fact(i)<=p){
    count++;
}else{
    break;
}
}
int sum=0;
rec(sum,p,count);
  cout<<sum<<endl;
  return 0;
}