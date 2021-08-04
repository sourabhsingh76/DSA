#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){            //selection sort (not exactly)
    cin>>arr[i];
  }
for(int i=0;i<n-1;i++){                  //imp
  for(int j=i+1;j<n;j++){                //imp
    if(arr[i]>arr[j]){
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
  }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  
  return 0;
}