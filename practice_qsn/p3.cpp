#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b;
int count=0;
cin>>a>>b;
if(a>b){
    cout<<"0"<<endl;
    return 0;
}
for(int i=a;i<=b;i++){
count++;
}
cout<<count<<endl;
  return 0;
}