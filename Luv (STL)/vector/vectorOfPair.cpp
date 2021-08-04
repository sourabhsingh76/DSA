#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>> &v){
cout<< "size:" << v.size() << endl;     
for(int i=0;i<v.size();++i){             
cout<<v[i].first <<" " << v[i].second<<endl;                 //v[i] is a element(which is a pair) 
}
return;
}

int main(){
vector<pair<int,int>> v={{1,3},{4,5},{2,8}};              // printing the vector of pair

printVec(v);

return 0;
}

