#include<bits/stdc++.h>
using namespace std;

void printMap(map<string,string> &m){
    cout<<m.size()<<endl;
for(auto &p : m){   
cout<<p.first<<" "<<p.second<<endl;
}
return;
}

int main(){
map<string,string> m;
m["abcd"]="shivam";     //time complexity of s.size()*log(n) in case of string [also depends on the length of string]

printMap(m);   

  return 0;
}