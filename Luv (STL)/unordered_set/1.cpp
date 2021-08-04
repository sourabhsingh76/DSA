#include<bits/stdc++.h>
using namespace std;

void printSet(unordered_set<string> &s){
    cout<<s.size()<<endl;
for(auto &p : s){    //best method of doing cout (best method because of range based loops and auto keyword)
cout<<p<<endl;
}
return;
}

int main(){
unordered_set<string> s;           //unordered set will print unique elements in random order
s.insert("abs");    //only method to insert the element in unordered set(from 14 to 18)          //O(1)
s.insert("ghj");
s.insert("dfg");
s.insert("jkl");
s.insert("abs");
auto it= s.find("ghjd");     //s.find returns the iterator       //O(1)
if(it!=s.end()){
cout<<(*it)<<endl;
}
auto it1= s.find("abs");
if(it1 !=s.end()){
cout<<(*it1)<<endl;
}
printSet(s);
s.erase(it1);           //in s.erase() we can pass iterator or the string itself (see line 28 and 29)
s.erase("dfg");

printSet(s);

  return 0;
}