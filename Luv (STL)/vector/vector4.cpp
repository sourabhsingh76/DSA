#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
cout<< "size:" << v.size() << endl;       //v.size() has time complexity of O(1)
for(int i=0;i<v.size();++i){              // v.size() just give the size of vector upto that point
cout<<v[i]<<" ";
}
cout<<endl;
return;
}

int main(){
vector<int> v(10,3);         //we have given value 3 to all the 10 elements of vector
v.push_back(7);
printVec(v);

return 0;
}

