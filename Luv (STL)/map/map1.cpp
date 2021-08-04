#include<bits/stdc++.h>
using namespace std;

int main(){
map<int,string> m;
m[1]="shivam";       //O(log(n))      //methods of taking input of pair in map from 6th to 10th line
m[6]="manthan";
m[3]="sourabh";
m.insert({2,"kshitij"});
m.insert(make_pair(5,"nikhil"));

for(auto &p : m){    //1st method of doing cout in map(best method because of range based loops and auto keyword)
cout<<p.first<<" "<<p.second<<endl;
}
cout<<endl;
map<int,string> :: iterator it;
for(it=m.begin(); it!=m.end(); ++it){           //2st method of doing cout in map
    cout<<(*it).first<<" "<<(*it).second<<endl;
}

cout<<endl;

//map<int,string> :: iterator it;
for(auto it=m.begin(); it!=m.end(); ++it){           //3st method of doing cout in map
    cout<<(*it).first<<" "<<(*it).second<<endl;
}
  return 0;
}