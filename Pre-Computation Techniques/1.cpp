/*
Given T Test cases and in each
test case a number N. Print its factorial
for each test case % M
where M = 10^9+7.

Constraints
1 <= T <= 10^5
1 <= N <= 10^5
*/

#include <bits/stdc++.h>                            //1a
using namespace std;
const int M=1e9+7;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long fact=1;         //imp
    for(int i=2;i<=n;i++){
       fact=(fact*i)%M;       //imp
    }
    cout<<fact<<endl;
}

return 0;
}

//O(t*(n-1)) ~ 10^10 which will give TLE(if time limit is 1 sec) because in 1 sec only 10^7 iterations are possible so we will pre compute values of factorial of all no. till n and store it in an array       
