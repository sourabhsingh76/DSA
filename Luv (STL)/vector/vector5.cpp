#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
cout<< "size:" << v.size() << endl;       //v.size() has time complexity of O(1)
for(int i=0;i<v.size();++i){            // v.size() just give the size of vector upto that point
cout<<v[i]<<" ";
}
cout<<endl;
return;
}

int main(){
vector<int> v;
v.push_back(7);
printVec(v);
v.pop_back();                      //O(1)
printVec(v);

return 0;
}

