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
vector<int> v[N];              //we have declared array of vectors(N vectors of size 0)
for(int i=0;i<N;++i){
  int n;
  cin>>n;
  for(int j=0;j<n;++j){
    int x;
    cin>>x;
    v[i].push_back(x);             //v[i] is a vector
  }
  printVec(v[i]);
}

return 0;
}

