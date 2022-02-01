#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int start,int end){        //reversing the array 
while(start<end){
  int temp= arr[start];                  //imp
  arr[start]=arr[end];                   //exchange 1st and last element
  arr[end]=temp; 
  start++;
  end--;
}
return;
}


int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
}
reverseArray(arr,0,n-1);    //imp

for(int i=0;i<n;i++){
  cout<<arr[i]<<",";
}
return 0;
}
