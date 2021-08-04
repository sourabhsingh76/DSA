#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){                       //selection sort (main method)
    cin>>arr[i];                              //first step is find the minvalue index
  }                                           //2nd step is to swap it with first element of unsorted array
                                              //continue it for i=1,2...n-1
for(int i=0;i<n-1;i++){
  int minIndex=i;                             //imp
  for(int j=i+1;j<n;j++){
    if(arr[minIndex]>arr[j]){
            minIndex=j;
    }
  }
   int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}