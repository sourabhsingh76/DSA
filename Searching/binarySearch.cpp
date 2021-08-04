#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key){
int s=0;                           //s is starting index
int e=n-1;                        //e is ending index
while(s<=e){
  int mid=(s+e)/2;
  if(arr[mid]==key){               //binary search in array and printing index
    return mid;
  }
  else if(arr[mid]<key){                 //condition for binary search is that the array should be in ascending order by itself
    s=mid+1;
  }else{
    e=mid-1;
  }                                     //time complexity is O(log(n)base 2)
}
return -1;
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
  cout<<binarySearch(arr,n,key);
  return 0;
}