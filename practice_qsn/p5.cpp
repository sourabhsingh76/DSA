#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
long long a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
long long sum=a[0];
long long ans=a[0];
for(int i=0;i<n-1;i++){
   long long count= a[i+1]-a[i];
sum=sum+ (count-1);
ans=ans*sum;
}
cout<<ans<<endl;


  return 0;
}