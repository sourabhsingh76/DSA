#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n,int key){                 //imp
for(int i=0;i<n;i++){
    if(arr[i]==key){
      return i;                      //linear search in array and printing index
    }
  }
return -1;                            //time complexity is O(n)
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int key;
  cin>>key;
  cout<<linearSearch(arr,n,key);               //imp
  return 0;
}