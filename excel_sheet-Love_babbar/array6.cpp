#include<bits/stdc++.h>
using namespace std;

int main(){
int n;                   //reversing the array 1st method
cin>>n;
int a[n];
int b[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n;i++){
b[i]=a[n-1-i];                    //imp
}
for(int i=0;i<n;i++){
cout<<b[i]<<" ";
}
cout<<endl;

return 0;
}
