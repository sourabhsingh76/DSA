#include<bits/stdc++.h>
using namespace std;

void printMap(map<int,string> &m){
    cout<<m.size()<<endl;
for(auto &p : m){    //best method of doing cout in map(best method because of range based loops and auto keyword)
cout<<p.first<<" "<<p.second<<endl;
}
return;
}
int main(){
map<int,string> m;
m[1]="shivam";     //O(log(n))     //methods of taking input of pair in map from 13th to 17th line
m[6]="manthan";
m[3]="sourabh";
m.insert({2,"kshitij"});
m.insert(make_pair(5,"nikhil"));

printMap(m);   //making fn so that we can use it again and again (if required)

  return 0;
}