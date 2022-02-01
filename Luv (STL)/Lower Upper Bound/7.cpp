#include<bits/stdc++.h>
using namespace std;

int main(){
map<int,int> m;
m[1]=5;
m[4]=52;
m[2]=22;
m[7]=44;
for(auto &p : m){
    cout<<p.first<<" "<<p.second<<endl;
}
cout<<endl;

auto it= m.lower_bound(4);   //logn   //() we put key   //syntax of writing LB and UB are different in case of set and map
if(it== m.end()){         
    cout<<"no found";
    return 0;
}

cout<<(*it).first<<" "<<(*it).second;
  return 0;
}