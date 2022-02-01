/*
Given array a of N integers. Given Q queries and in each query given a number X, print count of that number in array.
Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7 
1 <= = Q <= 10^5
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){        //2a
       cin>>a[i];
   }
   int q;        //queries are like testcases    //imp
   cin>>q;
   while(q--){
       int x;
       cin>>x;
       int count=0;
       for(int i=0;i<n;i++){
           if(x==a[i]){
               count++;
           }
       }
       cout<<count<<endl;
   }
   return 0;
}

//O(n)+O(q*n) = O(n^2) = 10^10 which will give TLE(if time limit is 1 sec) because in 1 sec only 10^7 iterations are possible so we will apply pre computation techniques
