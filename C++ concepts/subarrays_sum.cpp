#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){               // sum of individual subarrays of an array
    cin>>a[i];
  }
for(int i=0;i<n;i++){                     //time complexity of O(n^3)
  for(int j=i;j<n;j++){
    int sum=0;
    for(int k=i;k<=j;k++){
    sum+=a[k];
    }
    cout<<sum<<endl;
  }
}
return 0;
}