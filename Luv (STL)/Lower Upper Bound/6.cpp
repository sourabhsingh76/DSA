#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
set<int> s;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    s.insert(x);
}
for(auto &p : s){
    cout<<p<<" ";
}
cout<<endl;
auto it= s.upper_bound(5);          //syntax of writing LB and UB are different in case of set and map
if(it== s.end()){           //logn
    cout<<"no found";
    return 0;
}

cout<<*it<<endl;
  return 0;
}