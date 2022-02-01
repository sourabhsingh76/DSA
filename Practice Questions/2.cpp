#include<bits/stdc++.h>
using namespace std;


int main(){
int n,m;
cin>>n>>m;
int a[n];
int b[m];
for(int i=0;i<n;i++){
  cin>>a[i];
}
for(int i=0;i<m;i++){
  cin>>b[i];
}
sort(a,a+n);
sort(b,b+m);
if(a[0]>b[m-1]){
    cout<< a[0]-b[m-1] <<endl;
}
else if(a[0]==b[m-1]){
    cout<<a[0]-b[m-1]<<endl;
}
else if((a[0]<b[m-1]) && (a[n-1]<b[0])){
    int x= a[n-1]-b[0];
    cout<<abs(x)<<endl;
}
  return 0;
}