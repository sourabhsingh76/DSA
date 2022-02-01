#include<bits/stdc++.h>
using namespace std;

void reverseStr(string &s){
   for(int i=(s.size()-1); i>=0; i--){           //reversing a string
       cout<<s[i];
   }                                            //3rd method
    return;
}

int main(){
    string s="shivam";
    reverseStr(s);
    return 0;
}