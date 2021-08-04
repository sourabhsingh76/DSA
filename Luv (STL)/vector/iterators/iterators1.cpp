#include<bits/stdc++.h>
using namespace std;

int main(){     
vector<int> v={2,1,4,9,6};
for(int i=0;i<v.size();++i){
  cout<< v[i] <<" ";
}   
cout<<endl;
vector<int> :: iterator it= v.begin();        //syntax of declaring the iterator
cout<<(*it)<<endl;      //it iterator points to a element of a vector and * operator helps to find the value at that address
cout<<(*(it+1))<<endl;     //it+1 represents the next location

for(it=v.begin(); it!=v.end();++it){
    cout<< (*it) <<endl;
}
return 0;
}
