#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int start,int end){        //reversing the array 2nd method
while(start<end){
  int temp= arr[start];                  //imp
  arr[start]=arr[end];                   //exchange 1st and last element
  arr[end]=temp; 
  start++;
  end--;
}
return;
}

void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return;
}
int main(){
int arr[]={2,4,1,5,3,8};
int n= sizeof(arr)/sizeof(arr[0]);
printArray(arr,n);
reverseArray(arr,0,n-1);
printArray(arr,n);
return 0;
}
