#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
  int n;                              //max till i
  cin>>n;                              //2nd method
  int mx= INT_MIN;                  //imp
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 for(int i=0;i<n;i++){
 mx=max(mx,arr[i]);                   // never put "int" datatype here again if you have written it above(in line no. 8)
cout<<mx<<" ";
 }
return 0;
}