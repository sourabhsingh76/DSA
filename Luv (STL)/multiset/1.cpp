#include<bits/stdc++.h>
using namespace std;

void printSet(multiset<string> &s){
    cout<<s.size()<<endl;
for(auto &p : s){    //best method of doing cout (best method because of range based loops and auto keyword)
cout<<p<<endl;
}
return;
}

int main(){
multiset<string> s;           //multiset will print multiple elements in sorted order
s.insert("abs");    //only method to insert the element in multiset(from 14 to 18)          //O(logn)
s.insert("ghj");
s.insert("ghj");
s.insert("jkl");
s.insert("abs");

printSet(s);

auto it= s.find("abs");   //s.find returns the iterator of first abs if abs is present multiple times      //O(logn)
if(it !=s.end()){
s.erase(it);              //if we pass iterator to s.erase() then it will erase only one element that is pointed by iterator(first element) if the element is present multiple times
}
printSet(s);

s.erase("ghj");      //if we pass string to s.erase() then it will erase all the elements related to that string if that string is present multiple times

printSet(s);

  return 0;
}