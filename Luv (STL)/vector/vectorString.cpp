#include<bits/stdc++.h>
using namespace std;

void printVec(vector<string> v){
  cout<<"size:" << v.size() <<endl;
  for(int i=0;i<v.size();++i){
    cout<< v[i] << " ";
  }
  cout<<endl;
  return;
}
int main(){
  vector<string> v;           //vector of string
  int n;
  cin>>n;
  for(int i=0;i<n;++i){
    string s;
    cin>>s;
    v.push_back(s);
  }
  printVec(v);
  return 0;
}