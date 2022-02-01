#include<bits/stdc++.h>
using namespace std;
 
//Overlaping problem
int dp[100]={0};                       //doubt

//Binary Search Tree

int catalan(int n){
if(n==0){
    return 1;
}

if(dp[n]!=0){
    return dp[n];
}

int ans=0;
for(int i=1;i<=n;i++){
ans+= catalan(i-1)*catalan(n-i);
}

//for the first time, you can store the catalan number
dp[n]=ans;

return ans;
}

//we can also use 2nCn/(n+1)


int main(){
int n;
cin>>n;
for(int i=0;i<=n;i++){              //Catalan seris- 1,1,2,5,14,42,132,429,1430,
cout<<catalan(i)<<",";
}
    return 0;
}
