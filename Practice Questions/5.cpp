#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
int b[n];
for(int i=0;i<n;i++){
cin>>a[i];
}

for(int i=0;i<n;i++){
b[i]=a[i];
}

sort(b,b+n);
int p=b[n-2];


for(int i=0;i<n;i++){
if(a[i]==p){
    cout<<i+1<<endl;
}
}
  return 0;
}