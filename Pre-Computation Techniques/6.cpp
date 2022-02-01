/*
Given array a of N integers. Given Q queries and in each query given L and R print sum of
array elemnts from index L to R(L, R included)

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N                        //1 based indexing
*/

#include <bits/stdc++.h>                //3b
using namespace std;

const int N=1e5+10;
int pf[N];                  //array of prefix sum   //pre-computation technique     //imp

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=1;i<=n;i++){     //always use 1 based indexing for prefix sum
       cin>>a[i];
       pf[i]=pf[i-1]+a[i];           //doubt for pf[0]
   }
   
   int q;
   cin>>q;
   while(q--){
       int l,r;
       cin>>l>>r;
       cout<<pf[r]-pf[l-1]<<endl;
   }

return 0;  

}

//O(N)+O(Q) = O(N) = 10^5