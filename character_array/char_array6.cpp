#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(){  
int n;
cin>>n;
char arr[n+1];
cin>>arr;
int ans=0;
int maxlength=INT_MIN;
for(int i=0;i<n;i++){
 while(arr[i]!=' ' || arr[i]!='\0'){
    ans++;
 }
 maxlength=max(maxlength,ans);
    ans=0;
}
cout<<maxlength<<endl;

  return 0;
}