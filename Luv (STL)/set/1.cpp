#include<bits/stdc++.h>
using namespace std;

void printSet(set<string> &s){
    cout<<s.size()<<endl;
for(auto &p : s){    //best method of doing cout in set(best method because of range based loops and auto keyword)
cout<<p<<endl;
}
return;
}

int main(){
set<string> s;           //set will print unique elements in sorted order
s.insert("abs");    //only method to insert the element in set(from 14 to 18)          //O(logn)
s.insert("ghj");
s.insert("dfg");
s.insert("jkl");
s.insert("abs");
auto it= s.find("ghjd");     //s.find returns the iterator      //logn
if(it!=s.end()){
cout<<(*it)<<endl;
}
auto it1= s.find("abs");
if(it1 !=s.end()){
cout<<(*it1)<<endl;
}
printSet(s);
s.erase(it1);           //in s.erase() we can pass iterator or the string itself (see line 27 and 28)
s.erase("dfg");

printSet(s);

  return 0;
}