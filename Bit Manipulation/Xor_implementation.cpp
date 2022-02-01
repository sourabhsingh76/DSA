#include<bits/stdc++.h>
using namespace std;
 
 int unique(int arr[], int n){
int xorsum=0;
for(int i=0;i<n;i++){
  xorsum=xorsum^arr[i];        //program to find unique no. in array where all the no. are present twice except one
}                                    //we can apply commutative property in line 7
return xorsum;

 }
 
int main(){
 int arr[]={1,2,3,4,1,2,3};
 cout<<unique(arr,7);
    
    return 0;
  }
