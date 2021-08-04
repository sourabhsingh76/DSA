#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>> &v){
cout<< "size:" << v.size() << endl;     
for(int i=0;i<v.size();++i){             
cout<<v[i].first <<" " << v[i].second<<endl;          //v[i] is a element(which is a pair) 
}
cout<<endl;
return;
}

int main(){
vector<pair<int,int>> v;         //taking input of vector of pair and then printing output
printVec(v);

int n;
cin>>n;
for(int i=0;i<n;++i){
  int x,y;
  cin>>x>>y;
  v.push_back({x,y});
}
printVec(v);
return 0;
}

