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
v.push_back(6);

vector<int> v2 = v;                 //v2 is a copy of v              //time complexity of this copy is O(n)
v2.push_back(5);
printVec(v);
printVec(v2);                     
return 0;
}

