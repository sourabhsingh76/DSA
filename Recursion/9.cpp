#include <bits/stdc++.h>
using namespace std;          //replacing pi with 3.14 in string

void replacepi(string s){    //why can't we put here &  //doubt
if(s.length()==0){
return;
}
if(s[0]=='p' && s[1]=='i'){
    cout<<"3.14";
    replacepi(s.substr(2));

}else{
    cout<<s[0];
    replacepi(s.substr(1));

}
}

int main(){
string s="pippppiiiipi";
replacepi(s);

return 0;
}