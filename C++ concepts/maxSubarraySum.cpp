#include <bits/stdc++.h>
using namespace std;

int main(){                    
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){                    //maximum subarray sum method 1
    cin>>a[i];
  }
  int maxSum= INT_MIN;        //maxSum is at line 22(outside for loops) so we can't declare maxSum in for loops. If you declare it inside for loop then you can access it outside for loop
for(int i=0;i<n;i++){
  for(int j=i;j<n;j++){                    //time complexity of O(n^3) [Brute force approach]
    int sum=0;
    for(int k=i;k<=j;k++){
    sum+=a[k];
    }
    maxSum= max(maxSum,sum);       //sum variable is inside for loop of j so we have to declare sum variable inside of for loop of j
  }
}
cout<< maxSum <<endl;
return 0;
}