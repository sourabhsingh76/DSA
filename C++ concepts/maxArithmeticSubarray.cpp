#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];                //max arithmetic subarray length
  for(int i=0;i<n;i++){                    
    cin>>arr[i];
  }
  int ans=2;                //"ans" is max arithmetic subarray length
  int pd=arr[1]-arr[0];
  int j=2;
  int curr=2;               //"curr" is current arithmetic subarray length 
  while(j<n){
 if(pd==arr[j]-arr[j-1]){
curr++;
 }else{
  pd=arr[j]-arr[j-1];       //"pd" is previous common difference 
  curr=2;                  //imp
 }
ans= max(ans,curr);
    j++;
  }
  cout<<ans<<endl;
return 0;
}
