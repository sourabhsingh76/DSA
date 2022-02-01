#include<bits/stdc++.h>
using namespace std;

int main(){
string s="ssssddrreeeee";          //max no. of same char in a string     //2st method
unordered_map<char,int> m;
for(int i=0;i<s.size();i++){
    m[s[i]]++;
}
int mx=INT_MIN;
char ans;
for(auto p : m){
    if(mx<p.second){
        mx=p.second;
        ans=p.first;
    }
}

cout<<mx<<" "<<ans<<endl;
return 0;
}