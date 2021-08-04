#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
cout<< "size:" << v.size() << endl;     
for(int i=0;i<v.size();++i){             
cout<<v[i]<<" ";                     
}
cout<<endl;                           //temp method is better than this method
return;
}

int main(){                              
int N;
cin>>N;
vector<vector<int>> v;         //we have declared vector of vectors v of size 0
for(int i=0;i<N;++i){          
int n;
cin>>n;                        //use of v.push_back(vector<int> ()) in line 20 to avoid use of temp
v.push_back(vector<int> ());  //passing an empty vector so that we can apply push back fn in v[i] in line 24  
for(int j=0;j<n;++j){
  int x;
  cin>>x;
  v[i].push_back(x);
}
}
v[0].push_back(10);                         //push back 10 to the 0th vector

for(int i=0;i<v.size();++i){
  printVec(v[i]);
}

cout<< v[0][2];               //2nd element of 0th vector

return 0;
}

