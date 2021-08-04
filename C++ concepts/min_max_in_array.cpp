#include <bits/stdc++.h>
#include <climits>                         //header filer for INT_MAX and INT_MIN
using namespace std;

int main() {
  int n;
  cin>>n;                           //1st method
  int arr[n];                           //to find max and min number in an array
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int maxNo=INT_MIN;                     //imp
  int minNo=INT_MAX;                   //imp

  for(int i=0;i<n;i++){
    if(maxNo<arr[i]){
        maxNo=arr[i];
    }
    if(minNo>arr[i]){
        minNo=arr[i];
    }
  }
  cout<<maxNo<<endl;
  cout<<minNo<<endl;
    return 0;
}