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
vector<int> temp;              //we have used temp because there is no ith vector present     //temporary vector
int n;
cin>>n;
for(int j=0;j<n;++j){
  int x;
  cin>>x;
  temp.push_back(x);
}
v.push_back(temp);
}
v[0].push_back(10);                         //push back 10 to the 0th vector
v.push_back(vector<int> ());                //push back of empty vector in the outer vector v 

for(int i=0;i<v.size();++i){           ///use v.size() instead of N
  printVec(v[i]);
}

cout<< v[0][2];               //2nd element of 0th vector

return 0;
}

