#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
  cin>>a[i];                          
}
const int N= 1e5;              //doubt (code not running for N=1e6)
int idx[N];
for(int i=0;i<N;i++){
  idx[i]=-1;                      //first repeating element whose index is smallest
}

int minidx= INT_MAX;
for(int i=0;i<n;i++){
  if(idx[a[i]] == -1){
   idx[a[i]] =i;
  }else{
    minidx= min(minidx, idx[a[i]]);
  }
}
if(minidx == INT_MAX){
  cout<<"-1"<<endl;
}else{
  cout<< minidx <<endl;              //indexing in problem qsn starts from i=1 thats why +1 is added here
}
return 0;
}
