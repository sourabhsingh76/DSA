#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<n;i++){
  cout<<a[i]<<" ";
}
cout<<endl;
int *ptr= upper_bound(a+3,a+n,2);
if(ptr== (a+n)){
    cout<<"no found";
    return 0;
}
cout<<*ptr<<endl;

  return 0;
}