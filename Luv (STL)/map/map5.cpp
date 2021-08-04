#include<bits/stdc++.h>
using namespace std;


int main(){
map<int,string> m;
m[1]="shivam";     //O(log(n))     
m[6]="manthan";
m[3]="sourabh";
m.insert({2,"kshitij"});
m.insert(make_pair(5,"nikhil"));

auto it =m.find(3);     //O(log(n))  //m.find() returns the iterator
if(it==m.end()){
    cout<<"No value"<<endl;
}else{
    cout<<(*it).first<<" "<<(*it).second<<endl;
}

auto it1 =m.find(7);     //O(log(n))  //m.find() returns the iterator
if(it1==m.end()){
    cout<<"No value"<<endl;
}else{
    cout<<(*it1).first<<" "<<(*it1).second<<endl;
}


  return 0;
}