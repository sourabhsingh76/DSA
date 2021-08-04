#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
cout<< "size:" << v.size() << endl;       //v.size() function has time complexity of O(1)
for(int i=0;i<v.size();++i){              // v.size() just give the size of vector upto that point
cout<<v[i]<<" ";
}
cout<<endl;
return;
}

int main(){
vector<int> v(10);   //we have declare a vector v of size 10 but we can change the size of v as size of vectors are dynamic in nature
v.push_back(7);
printVec(v);

return 0;
}

