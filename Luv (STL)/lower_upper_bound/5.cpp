#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a.begin(),a.end());
for(int i=0;i<n;i++){
  cout<<a[i]<<" ";
}
cout<<endl;
auto it= upper_bound(a.begin(),a.end(),5);   //in case of vector, UB and LB return iterator
if(it== a.end()){
    cout<<"no found";
    return 0;
}
cout<<*it<<endl;

  return 0;
}