#include<bits/stdc++.h>
using namespace std;

void printMap(unordered_map<int,string> &m){       //before revising this , first revise map
    cout<<m.size()<<endl;
for(auto &p : m){    //best method of doing cout (best method because of range based loops and auto keyword)
cout<<p.first<<" "<<p.second<<endl;
}
return;
}

int main(){
unordered_map<int,string> m;        //output will come in unordered
m[1]="shivam";                  //O(1)     
m[6]="manthan";
m[3]="sourabh";
m.insert({2,"kshitij"});
m.insert(make_pair(5,"nikhil"));

printMap(m);   
  return 0;
}