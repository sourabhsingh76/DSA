#include<bits/stdc++.h>
using namespace std;
 
int catalan(int n){
if(n==0){
    return 1;
}
int ans=0;
for(int i=1;i<=n;i++){
ans+= catalan(i-1)*catalan(n-i);
}
return ans;
}

int main(){
for(int i=0;i<=5;i++){              //Catalan seris- 1,1,2,5,14,42,132,429,1430,
cout<<catalan(i)<<",";
}
    return 0;
  }
