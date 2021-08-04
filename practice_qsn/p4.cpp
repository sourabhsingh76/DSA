#include<bits/stdc++.h>
using namespace std;

int main(){
int n,x;
cin>>n>>x;
int a[n];
int sum=0;
for(int i=0;i<n;i++){
cin>>a[i];
if(i%2 !=0){
 a[i]=a[i]-1;
}
}
for(int i=0;i<n;i++){
sum+=a[i];
}
if(sum<=x){
    cout<<"Yes"<<endl;
}else{
    cout<<"No"<<endl;
}

  return 0;
}