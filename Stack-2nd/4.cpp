#include <bits/stdc++.h>
using namespace std;


int main(){
stack<string> s;
s.push("abc");
s.push("fshd");
s.push("aa");

while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}

  return 0;
}



