#include<bits/stdc++.h>
using namespace std;

string reverseStr(string &s){
    for(int i=0; i<(s.size()/2); i++){       //reversing a string
        swap(s[i],s[s.size()-1-i]);       //2nd method
    }
    return s;
}

int main(){
    string s="shivam";
    cout<< reverseStr(s);
    return 0;
}