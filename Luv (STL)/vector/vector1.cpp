#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
cout<< "size:" << v.size() << endl;        //v.size() has time complexity of O(1)
for(int i=0;i<v.size();++i){               // v.size() just give the size of vector upto that point
cout<<v[i]<<" ";
}
cout<<endl;
return;
}

int main(){
vector<int> v;
int n;
cin>>n;
for(int i=0;i<n;++i){
  int x;
  cin>>x;
  v.push_back(x);            //O(1)
}
printVec(v);
return 0;
}

