#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;                       //7 and 8th line are very imp for last element of array(if last element is greater) 
int a[n+1];                   //we have to compare i with i+1 thats why 
a[n]=-1;                         //imp
for(int i=0;i<n;i++){            //record breaking days qsv
  cin>>a[i];
}
if(n==1){
  cout<<"1"<<endl;
  return 0;                          //imp 
}
int ans=0;
int mx=-1;
for(int i=0;i<n;i++){
  if(a[i]>mx && a[i]>a[i+1]){
    ans++;
  }
  mx= max(mx,a[i]);
}
cout<<ans<<endl;
return 0;
}