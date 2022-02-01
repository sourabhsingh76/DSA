/*
Given array a of N integers. Given Q queries and in each query given L and R print sum of
array elemnts from index L to R(L, R included)

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N                        //1 based indexing
*/

#include <bits/stdc++.h>            //3a
using namespace std;

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=1;i<=n;i++){     //always use 1 based indexing for prefix sum which we will use in 3b
       cin>>a[i];
   }
   int q;
   cin>>q;
   while(q--){
       int l,r;
       cin>>l>>r;
       long long sum=0;            //imp
       for(int i=l;i<=r;i++){
        sum=sum+a[i];
       }
       cout<<sum<<endl;
   }

return 0;  

}

//O(N)+O(Q*N) = O(N^2) = 10^10
