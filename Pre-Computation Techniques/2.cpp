/*
Given T Test cases and in each
test case a number N. Print its factorial
for each test case % M
where M = 10^9+7.

Constraints
1 <= T <= 10^5
1 <= N <= 10^5
*/
 
#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;
const int n=1e5+10;

int main(){                             //1b
long long fact[n];                //pre computation    
fact[0]=1,fact[1]=1;
for(int i=2;i<n;i++){
    fact[i]= (fact[i-1]*i)%M;
}

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    cout<<fact[n]<<endl;
}

return 0;
}

//O(n)+O(t) = 10^5 + 10^5 = 10^5
