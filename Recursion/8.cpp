#include <bits/stdc++.h>
using namespace std;

void rev(string s){     //reverse a string using recursion
if(s.length()==0){
        return;
    }
string ros=s.substr(1);   //imp       //ros is rest of string
rev(ros);
cout<<s[0];
}

int main(){
string s="binod";
rev(s);


return 0;
}