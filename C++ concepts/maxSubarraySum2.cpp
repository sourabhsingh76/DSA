#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
int currsum[n+1];                             //maximum subarray sum (method 2)
currsum[0]=0;  

for(int i=1;i<=n;i++){                        //time complexity of O(n^2 + n) [optimised approach]
  currsum[i]=currsum[i-1]+arr[i-1];        
}
int maxSum=INT_MIN;
for(int i=1;i<=n;i++){
  int sum=0;
  for(int j=0;j<i;j++){
    sum = currsum[i]-currsum[j];             //imp
    maxSum=max(sum,maxSum);
  }
}
cout<<maxSum;
return 0;
}