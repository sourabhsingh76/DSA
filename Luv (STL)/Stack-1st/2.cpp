#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> m={{'[',-3},{'{',-2},{'(',-1},{')',1},{'}',2},{']',3}};
string balanced(string &s){
  stack<char> stk;
  for(char &bracket: s){                  //v imp
  if(m[bracket]<0){
    stk.push(bracket); 
  }else{
if(stk.empty()){                       //balanced parenthesis using stack
  return "No";
}
char tp=stk.top();
if(m[tp] + m[bracket]!=0){
  return "No";
}
stk.pop();
  }
 
  }
   if(stk.empty()){
  return "Yes";
}else{
  return "No";
}
}


int main(){
string s;
cin>>s;
cout<<balanced(s);

  return 0;
}