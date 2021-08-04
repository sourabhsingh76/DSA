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

int mn= INT_MAX;

for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
  int p=abs(a[i]-b[j]);
   mn= min(mn,p);
}
}
cout<<mn<<endl;
  return 0;
}