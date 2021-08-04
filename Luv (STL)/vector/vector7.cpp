#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){            //if you dont want to make copy, then pass by reference &
cout<< "size:" << v.size() << endl;       //v.size() has time complexity of O(1)
for(int i=0;i<v.size();++i){            // v.size() just give the size of vector upto that point
cout<<v[i]<<" ";
}
v.push_back(2);
cout<<endl;
return;
}

int main(){
vector<int> v;
v.push_back(7);
v.push_back(6);

vector<int> &v2 = v;               //v2 is same as v due to reference &
v2.push_back(5);                   //if we change v2, v will also change(both are connected due to & in line 19)
printVec(v);
printVec(v);
printVec(v2); 

return 0;
}

