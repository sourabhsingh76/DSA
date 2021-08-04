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
m[1]="shivam";     //O(log(n))     
m[6]="manthan";
m[3]="sourabh";
m.insert({5,"kshitij"});
m[7];   //it has empty string but still it will consume log(n) time and this 7 and empty string will get inserted in map 

printMap(m);   //making fn so that we can use it again and again (if required)

  return 0;
}