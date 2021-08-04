#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,s;
  cin>>n>>s;
  int a[n];
  for(int i=0;i<n;i++){            //finding index of subarray With given Sum
    cin>>a[i]; 
  }
  int i=0, j=0, st=-1, en=-1, sum=0;          //time complexity of O(n)
  while(j<n && sum+a[j]<=s){
    sum+=a[j];
    j++;                         //if sum+a[j]=s then j will run 1 more time
  }
if(sum==s){
  cout<<i+1<<" "<<j<<endl;      //to make 1 base indexing
  return 0;                   //if this condition satisfy then return from here, no need to check futher code
}
while(j<n){
  sum+= a[j];
  while(sum>s){
    sum-=a[i];
    i++;
}
if(sum==s){
  st=i+1;                  //to make 1 base indexing
  en=j+1;                  //to make 1 base indexing
  break;
}
j++;
}
cout<< st <<" "<< en <<endl;
}