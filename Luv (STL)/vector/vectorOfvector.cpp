#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
cout<< "size:" << v.size() << endl;     
for(int i=0;i<v.size();++i){             
cout<<v[i]<<" ";                     
}
cout<<endl;
return;
}

int main(){                              
int N;
cin>>N;
vector<vector<int>> v;         //we have declared vector of vectors v of size 0
for(int i=0;i<N;++i){
vector<int> temp;         //imp     //we have declared temporary vector to push back in v
int n;
cin>>n;
for(int j=0;j<n;++j){
  int x;
  cin>>x;
  temp.push_back(x);
}
v.push_back(temp);
}
for(int i=0;i<N;++i){
  printVec(v[i]);
}

return 0;
}

