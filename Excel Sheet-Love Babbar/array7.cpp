#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;                     //Array-7 (1st method)
  cin>>n;                   //finding max and min element of an array of size n
  int arr[n];
  for(int i=0;i<n;i++){   
    cin>>arr[i];       
  }
  int maxNo=INT_MIN;
  int minNo=INT_MAX;

  for(int i=0;i<n;i++){
    maxNo= max(maxNo,arr[i]);
    minNo= min(minNo,arr[i]);
  }
  cout<<maxNo<<" "<<minNo<<endl;

  return 0;
}