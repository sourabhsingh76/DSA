#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){       //finding kth min element in an array of size n without sorting    //imp
    cin>>arr[i];
  }
  int k;
  cin>>k;
  
const int N=1e5;
int idx[N];
for(int i=0;i<N;i++){
idx[i]=-1;
}
for(int i=0;i<n;i++){
idx[arr[i]]=i;
}
int count=0;
for(int i=0;i<N;i++){
if(idx[i]!=-1){
count++;
if(count==k){      //imp
  cout<<i<<endl;
  return 0;
}
}
}

  return 0;

}